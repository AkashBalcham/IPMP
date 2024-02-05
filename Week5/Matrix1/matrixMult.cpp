#include <bits/stdc++.h>
using namespace std;

void multiply(vector<vector<int>> A, vector<vector<int>> B, vector<vector<int>> C, int N) {
      //add code here.
    int rows = N, cols = N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            C[i][j] = 0;
            for(int k=0; k<N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    vector<vector<int>> a = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }, 
    b = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    },
    c;
    multiply(a, b, c, 3);
}