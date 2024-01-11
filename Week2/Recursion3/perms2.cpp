#include <bits/stdc++.h>
using namespace std;

set<vector<int>> sols;
void dfs(int i, vector<int> &nums) {
    if (i == nums.size()) {
        vector<int> x = nums;
        sols.insert(x);
        return;
    }

    for(int j=i; j<nums.size(); j++) {
        if(i != j and nums[i] == nums[j]) continue;
        swap(nums[i], nums[j]);
        dfs(i+1, nums);

        swap(nums[i], nums[j]);
    }

}
vector<vector<int>> permuteUnique(vector<int>& nums) {
    dfs(0, nums);
    vector<vector<int>> s (sols.begin(), sols.end());
    return s;
}

int main() {
    vector<int> arr { 1, 1, 2 };
    permuteUnique(arr);
}