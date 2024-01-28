#include <bits/stdc++.h>
using namespace std;

int search(vector<int> arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = arr[0];
    while(low <= high) {
        int mid = (low + high) >> 1;
        if (arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            return ans;
        
        }
        ans = min(ans, arr[mid]);
        if (arr[low] <= arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return ans;
}

int main() {
    vector<int> arr {4,5,6,7,0,1,2};
    cout << search(arr, 0) << endl;
}