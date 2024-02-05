#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int j=0; j<n; j++) {
        for(int i=0; i<n/2; i++) {
            swap(matrix[i][j], matrix[n-1-i][j]);
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main() {
    vector<vector<int>> matrix {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    rotate(matrix);
}