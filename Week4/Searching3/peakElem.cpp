#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> arr) {
    // Your code here
    int n = arr.size();
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if (mid == 0) {
            if (arr[mid] >= arr[mid+1]) return mid;
        }
        if (mid == n-1) {
            if (arr[mid] >= arr[mid-1]) return mid;
        
        }
        if (arr[mid-1] <= arr[mid] and arr[mid] >= arr[mid+1]) return mid;
        
        if (arr[mid-1] <= arr[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr {2, 2};
    cout << peakElement(arr) << endl;
}