#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low = 0, high = n-1, i=0;
    while(i<=high) {
        if (nums[i] == 0) {
            swap(nums[i], nums[low]);
            low++;
            i++;
        } else if (nums[i] == 1) {
            i++;
        } else {
            swap(nums[i], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortColors(arr);
}