#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sols;
void dfs(int i, vector<int> &nums) {
    if (i == nums.size()) {
        vector<int> x = nums;
        sols.push_back(x);
        return;
    }

    for(int j=i; j<nums.size(); j++) {
        swap(nums[i], nums[j]);
        dfs(i+1, nums);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    dfs(0, nums);
    return sols;
}

int main() {
    vector<int> v {1, 2, 3};
    permute(v);
}