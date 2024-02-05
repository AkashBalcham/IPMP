#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix, int n) { 
    // code here
    int rows = matrix.size(), cols = matrix[0].size();
    for(int i=0; i<rows; i++) {
        for(int j=i+1; j<cols; j++) {
            // int temp = matrix[i][j];
            // matrix[i][j] = matrix[j][i];
            // matrix[j][i] = temp;
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main() {
    int n = 4;
    vector<vector<int>> arr = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4},
    };
    transpose(arr, arr.size());
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}