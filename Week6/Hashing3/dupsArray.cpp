#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        int x = abs(nums[i]);
        if (nums[x-1] < 0) res.push_back(x);
        else nums[x-1] *= -1;
    }
    return res;
}

int main() {
    vector<int> arr {4,3,2,7,8,2,3,1};
    vector<int> res = findDuplicates(arr);
}