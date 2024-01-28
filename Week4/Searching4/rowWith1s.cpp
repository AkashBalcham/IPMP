#include <bits/stdc++.h>
using namespace std;

int row(vector<vector<int>> matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    int maxRow = -1;
    int curRow = 0, curCol = cols - 1;
    while(curRow < rows and curCol >= 0) {
        if (matrix[curRow][curCol]) {
            maxRow = curRow;
            curCol--;
        } else {
            curRow++;
        }
    }
    return maxRow;
}

int main() {
    vector<vector<int>> arr {
        {0, 0, 1, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 0, 0}
    };
    cout << row(arr) << endl;
}