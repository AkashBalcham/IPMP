#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &nums) {
    int maxSum = INT_MIN, curSum = 0;
    int startIndex = -1, endIndex = -1;
    int n = nums.size();
    vector<int> subarr;
    for(int i=0; i<n; i++) {
        int start;
        if (curSum == 0) {
            start = i;
        }
        curSum += nums[i];
        subarr.push_back(nums[i]);
        maxSum = max(maxSum, curSum);
        if (curSum > maxSum) {
            maxSum = curSum;
            startIndex = start;
            endIndex = i;
        }

        if (curSum < 0) {
            curSum = 0;
        }
    }
    return  maxSum;
}
        // cout << "Index: " << i << endl;
        // cout << "Current sum: " << curSum << endl;
        // cout << "Max sum: " << maxSum << endl;

int main() {
    vector<int>arr {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSum(arr) << endl;
}