#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr, int k) {
    int n = arr.size(), count = 0;
    vector<int> pref(n);
    pref[0] = arr[0];
    for(int i=1; i<n; i++) {
        pref[i] = arr[i] + pref[i-1];
    }
    unordered_map<int, int> sumCounts;
    for(int i=0; i<n; i++) {
        int rem = (pref[i] - k);
        if (pref[i] == k) {
            count++;
        }
        if (sumCounts.find(rem) != sumCounts.end()) {
            count += sumCounts[rem];
        }
        sumCounts[pref[i]]++;
    }
    return count;
}

int main() {
    vector<int> nums {1, 1, 1};
    int k = 2;
    cout << subarraySum(nums, k) << endl;
}