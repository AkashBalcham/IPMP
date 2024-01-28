#include <bits/stdc++.h>
using namespace std;

int getSum(vector<int> nums, int divisor) {
    int sum = 0;
    for(int i: nums) {
        sum += ceil((double)i / (double)divisor);
    }
    return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int l = 1, r = *max_element(nums.begin(), nums.end());
    int ans = r;
    while(l <= r) {
        int mid = (l+r)/2;
        int s = getSum(nums, mid);
        if (s <= threshold) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr {1, 2, 5, 9};
    int threshold = 6;
    cout << smallestDivisor(arr, threshold) << endl;
}