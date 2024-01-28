#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
    int n = arr.size();
    int ans = INT_MAX;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) >> 1;
        ans = min(ans, arr[mid]);
        if (arr[mid] == arr[low] and arr[mid] == arr[high]) {
            low++;
            high--;
            continue;
        }
        if (arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr {4,5,6,7,0,1,4};
    cout << findMin(arr) << endl;
}