#include <bits/stdc++.h>
using namespace std;

    // int x = 0;
    // int count = 0;
    // for(int i=0; i<n; i++) {
    //     x = 0;
    //     for(int j=i; j<n; j++) {
    //         x ^= arr[j];
    //         if (x  == k) count++;
    //     }
    // }
int subarrays(vector<int> arr, long long k) {
    vector<int> prefixXor;
    int n = arr.size();
    prefixXor.push_back(arr[0]);
    for(int i=1; i<n; i++) {
        prefixXor.push_back(prefixXor[i-1] ^ arr[i]);
    }
    int count = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for(int i=0; i<n; i++) {
        // if (prefixXor[i] == k) count++;
        // else {
            int rem = prefixXor[i] ^ k;
            if (mp.find(rem) != mp.end()) {
                count += mp[rem];
            }
        // }
        mp[prefixXor[i]]++;
    }
    return count;
}

int main() {
    vector<int> arr {1, 2, 3, 2};
    int k = 2;
    cout << subarrays(arr, k) << endl;
}