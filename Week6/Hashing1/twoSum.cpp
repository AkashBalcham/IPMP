#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> comp;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        int comple = target - nums[i];
        if (comp.find(comple) != comp.end()) return { i, comp[comple] };
        comp[nums[i]] = i;
    }
    return { -1, -1 };
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> inds = twoSum(nums, target);
}