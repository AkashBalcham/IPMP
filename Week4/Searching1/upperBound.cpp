#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int target) {
    int l = 0, r = arr.size() - 1;
    int ans = r + 1;
    while (l <= r) {
        int mid = l + ((r - l) >> 1);
        if (arr[mid] >= target) {
            ans = min(ans, mid);
            r = mid - 1;
        } else if (arr[mid] < target) {
            l = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> arr, int target) {
    int l = 0, r = arr.size() - 1;
    int ans = r + 1;
    while (l <= r) {
        int mid = l + ((r - l) >> 1);
        if (arr[mid] > target) {
            ans = min(ans, mid);
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
    int target = 9;

    cout << "Lower bound index: " << lowerBound(arr, target) << endl;
    cout << "Upper bound index: " << upperBound(arr, target) << endl;

}