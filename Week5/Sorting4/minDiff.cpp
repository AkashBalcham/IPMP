#include <bits/stdc++.h>
using namespace std;

int  minimum_difference(vector<int>nums){
    // Code here
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int minDiff = INT_MAX;
    for(int i=1; i<n; i++) {
        minDiff = min(minDiff, nums[i]-nums[i-1]);
    }
    return minDiff;
} 

int main() {
    vector<int> nums {2, 4, 5, 9, 7};
    cout << minimum_difference(nums) << endl;
}