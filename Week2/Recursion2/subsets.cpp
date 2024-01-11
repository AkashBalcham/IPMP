#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int> &curPath, vector<int> &arr, vector<vector<int>> &solutions) {
    if (i == arr.size()) {
        vector<int> sol = curPath;
        solutions.push_back(sol);
        return;
    }
    curPath.push_back(arr[i]);
    dfs(i+1, curPath, arr, solutions);

    curPath.pop_back();

    dfs(i+1, curPath, arr, solutions);
}

vector<vector<int>> subset(vector<int> &arr) {
    vector<vector<int>>  solutions;
    vector<int> curPath;
    dfs(0, curPath, arr, solutions);
    return solutions;
}


int main() {
    vector<int> arr = { 1, 2, 3 };
    vector<vector<int>> res = subset(arr);
    for(int i=0; i<res.size(); i++) {
        for(int j=0; j<res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}