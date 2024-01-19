#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums) {
    map<int, int> mp;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        if (mp.find(nums[i]) == mp.end()) {
            mp.insert({ nums[i], 1 });
        } else {
            mp[nums[i]]++;
        }
        if (mp[nums[i]] > n/2) return nums[i];
    }
    return -1;
}

int main() {
    vector<int> arr { 3, 2, 3 };
    cout << majorityElement(arr) << endl;
}