#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size(), cols = matrix[0].size();
    int ans = rows - 1;
    int l1 = 0, r1 = rows-1;
    while(l1 <= r1) {
        int mid = (l1 + r1) >> 1;
        if (matrix[mid][0] <= target) {
            ans = mid;
            l1 = mid + 1;
        } else {
            r1 = mid - 1;
        }
    }
    int row = ans;
    l1 = 0, r1 = cols-1;
    while(l1 <= r1) {
        int mid = (l1 + r1) >> 1;
        if (matrix[row][mid] == target) return true;
        if (matrix[row][mid] < target) l1 = mid + 1;
        else r1 = mid - 1;
    }
}

int main() {
    vector<vector<int>> arr {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 13;
    cout << (searchMatrix(arr, target) ? "Present" : "Absent") << endl;
}