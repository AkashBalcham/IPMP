#include <bits/stdc++.h>
using namespace std;

int longest(vector<int> &nums) {
    int n = nums.size();
    unordered_set<int> s;
    for(int i: nums) s.insert(i);

    int longest = 1;
    for(int i=0; i<n; i++) {
        int cur = nums[i];
        if (s.find(cur - 1) == s.end()) {
            int curNum = cur;
            int curLength = 1;
            while(s.find(curNum + 1) != s.end()) {
                curLength++;
                curNum++;
            }
            longest = max(longest, curLength);
        }
    }
    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longest(nums) << endl;
}