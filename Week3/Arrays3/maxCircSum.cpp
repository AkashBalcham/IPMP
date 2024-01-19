#include <bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int maxSum = INT_MIN, minSum = INT_MAX, curSumMax = 0, curSumMin = 0, totalSum = 0;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        curSumMax += nums[i];
        curSumMin += nums[i];
        totalSum += nums[i];
        if (curSumMax > maxSum) maxSum = curSumMax;
        if (curSumMin < minSum) minSum = curSumMin;

        if (curSumMax < 0) curSumMax = 0;
        if (curSumMin > 0) curSumMin = 0;

    }
    if (totalSum == minSum) return maxSum;
    return max(maxSum, totalSum - minSum);
}

int main() {
    vector<int> arr {5, -3, 5};
    cout << maxSubarraySumCircular(arr) << endl;
}