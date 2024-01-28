#include <bits/stdc++.h>
using namespace std;

pair<int, int> ceilFloor(vector<int> arr, int m) {
    int n = arr.size();
    int l = 0, r = n-1;
    int floor = -1, ceil = -1;
    while(l <= r) {
        int mid = l + ((r - l) / 2);
        if (arr[mid] == m) {
            return {m, m};
        } else if (arr[mid] > m) {
            ceil = arr[mid];
            r = mid - 1;
        } else {
            floor = arr[mid];
            l = mid + 1;
        }
    }
    return { floor, ceil };
}

int main() {
    vector<int> arr {3, 4, 7, 8, 8, 10};
    int m = 5;
    pair <int, int> p = ceilFloor(arr, m);
    cout << p.first << ", " << p.second << endl;
}