#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
    int n = arr.size();
    int l = 0, r = n - 1;
    int ans = INT_MAX;
    while(l <= r) {
        int mid = (l+r) >> 1;
        ans = min(arr[mid], ans);
        if (arr[l] <= arr[mid]) l = mid + 1;
        else r = mid - 1;
        
    }
    return ans;
}

int main() {
    vector<int> arr {3,4,5,1,2};
    cout << findMin(arr) << endl;
}