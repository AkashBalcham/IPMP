#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct (int arr[], int n, int k) {
    //code here.
    vector<int> res;
    unordered_map<int, int> mp;
    for(int i=0; i<k; i++) {
        mp[arr[i]]++;
    }
    res.push_back(mp.size());
    for(int i=k; i<n; i++) {
        mp[arr[i-k]]--;
        if (mp[arr[i-k]] == 0) mp.erase(arr[i-k]);
        mp[arr[i]]++;
        res.push_back(mp.size());
    }
    return res;
}

int main() {
    int n = 7;
    int arr[n] = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    vector<int> res = countDistinct(arr, n, k);
}
