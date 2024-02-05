#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    int topBound = -1, bottomBound = rows, leftBound = -1, rightBound = cols;
    vector<int> res;
    int row, col;
    while(topBound < bottomBound and leftBound < rightBound) {
        //upper boundary
        row = topBound+1;
        for(int j=leftBound+1; j<rightBound; j++) {
            res.push_back(matrix[row][j]);
        }
        if (res.size() == rows * cols) return res;
        topBound++;

        //right boundary
        col =  rightBound-1;
        for(int i=topBound+1; i<bottomBound; i++) {
            res.push_back(matrix[i][col]);
        }
        rightBound--;
        if (res.size() == rows * cols) return res;

        //bottom boundary
        row = bottomBound-1;
        for(int j=rightBound-1; j>leftBound; j--) {
            res.push_back(matrix[row][j]);
        }
        bottomBound--;
        if (res.size() == rows * cols) return res;

        //left boundary
        col = leftBound+1;
        for(int i=bottomBound-1; i>topBound; i--) {
            res.push_back(matrix[i][col]);
        }
        leftBound++;
        if (res.size() == rows * cols) return res;
    }
    return res;
}