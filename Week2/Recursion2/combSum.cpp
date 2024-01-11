#include <bits/stdc++.h>
using namespace std;

set<vector<int>> solutions;
void dfs(vector<int> &curPath, vector<int> arr, int target) {
    int sum = accumulate(curPath.begin(), curPath.end(), 0);
    if(sum > target) return;
    if (sum == target) {
        vector<int> sol = curPath;
        sort(sol.begin(), sol.end());
        solutions.insert(sol);
        return;
    }
    for(int i=0; i<arr.size(); i++) {
        curPath.push_back(arr[i]);
        dfs(curPath, arr, target);

        curPath.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> ploopy;
    dfs(ploopy, candidates, target);
    vector<vector<int>> v (solutions.begin(), solutions.end());
    return v;
}

int main() {
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
}