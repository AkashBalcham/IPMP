#include <bits/stdc++.h>
using namespace std;

int findRot(vector<int> &arr) {
    int n = arr.size();
    int mini = n, minElem = INT_MAX;
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) >> 1;
        if (arr[low] <= arr[high]) {
            if (arr[low] < minElem) {
                minElem = arr[low];
                mini = low;
            }
            return mini;
        
        }


        if (arr[mid] < minElem) {
            minElem = arr[mid];
            mini = mid;
        }
        if (arr[low] <= arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return mini;
}

int main() {
    vector<int> arr {27, 31, 43, 45, 46, 5, 11, 13, 18, 19, 20};
    cout << findRot(arr) << endl;
}
