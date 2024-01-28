#include <bits/stdc++.h>
using namespace std;

int insertPos(vector<int> arr, int m) {
    int l = 0, r = arr.size() - 1;
    if (r < 0) return 0;
    int ans = r + 1;
    while (l <= r) {
        int mid = l + ((r - l) >> 1);
        if (arr[mid] == m) return mid;

        if (arr[mid] > m) {
            ans = mid;
            r = mid - 1;
        } else if (arr[mid] < m) {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr {1, 2, 4, 7};
    int m = 6;
    cout << insertPos(arr, m) << endl;
}