#include <bits/stdc++.h>
using namespace std;


int rob(vector<int> &nums) {
    int n = nums.size();
    vector<int> moneyTillIndex(n);
    moneyTillIndex[0] = nums[0];
    moneyTillIndex[1] = max(nums[0], nums[1]);
    for(int i=2; i<n; i++) {
        moneyTillIndex[i] = max(moneyTillIndex[i-1], nums[i] + moneyTillIndex[i-2]);
    }
    return moneyTillIndex[n-1];
}

int main() {
    vector<int> arr { 2,7,9,3,1 };
    cout << rob(arr) << endl;
}