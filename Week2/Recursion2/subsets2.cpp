#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solutions;

void dfs(int i, vector<int> &curPath, vector<int> &nums) {
    if (i == nums.size()) {
        vector<int> sol = curPath;
        solutions.push_back(sol);
        return;
    }

    curPath.push_back(nums[i]);
    dfs(i+1, curPath, nums);

    curPath.pop_back();

    while(i+1 < nums.size() and nums[i] == nums[i+1]) {
        i++;
    }
    dfs(i+1, curPath, nums);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<int> p;
    sort(nums.begin(), nums.end());
    dfs(0, p, nums);
    return solutions;
}

int main() {
    vector<int> n {3, 2, 6, 4, 4, 1};
    vector<vector<int>> res = subsetsWithDup(n);

}