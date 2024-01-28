#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    int l=0, r=n-1;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if (mid == 0) {
            if (arr[mid] != arr[mid+1]) return arr[mid];
        }
        if (mid == n-1) {
            if (arr[mid] != arr[mid-1]) return arr[mid];
        }
        if (arr[mid-1] != arr[mid] and arr[mid] != arr[mid+1]) return arr[mid];

        int isOdd = mid & 1;
        if (arr[mid] == arr[mid+1]) {
            if (isOdd) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if (isOdd) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr {3,3,7,7,10,11,11};
    cout << singleNonDuplicate(arr) << endl;
}