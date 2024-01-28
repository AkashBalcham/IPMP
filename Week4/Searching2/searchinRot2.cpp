#include <bits/stdc++.h>
using namespace std;

bool findMin(vector<int> &arr, int key) {
    int n = arr.size();
    int l=0, r = n-1;
    while(l <= r) {
        int mid = (l+r) >> 1;
        if (arr[mid] == key) return true;
        if (arr[mid] == arr[l] and arr[mid] == arr[r]) {
            l++;
            r--;
            continue;
        }
        if (arr[l] <= arr[mid]) {
            // LEft sorted
            if (arr[l] <= key and key <= arr[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else if (arr[mid] <= arr[r]) {
            //Right sorted
            if (arr[mid] <= key and key <= arr[r]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr {2,5,6,0,0,1,2};
    int key = 0;
    cout << findMin(arr, key) << endl;
}