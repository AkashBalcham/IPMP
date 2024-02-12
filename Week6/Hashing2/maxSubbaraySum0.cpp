#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&arr, int n) {   
    // Your code here
    unordered_map<int, int> mp;
    int maxLen = 0;
    int s = 0;
    for(int i=0; i<n; i++) {
        s += arr[i];
        if (s == 0) maxLen = max(maxLen, i+1);
        else {
            if (mp.find(s) == mp.end()) {
                mp[s] = i;
            } else {
                maxLen = max(maxLen, i - mp[s]);
            }
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr {15,-2,2,-8,1,7,10,23};
    cout << maxLen(arr, arr.size()) << endl;
}