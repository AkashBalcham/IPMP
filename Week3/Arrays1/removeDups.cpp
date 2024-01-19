#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int j = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[j] != nums[i]) {
            nums[++j] = nums[i];
        }
    }

    return j + 1;
}

int main() {
    vector<int> nums {1, 2, 2, 3, 3, 3, 3, 5};
    cout << removeDuplicates(nums) << endl;
}