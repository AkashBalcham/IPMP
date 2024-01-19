#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxProd = INT_MIN, curProd;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        curProd = nums[i];
        if (curProd > maxProd) {
            maxProd = curProd;
        }
        for(int j=i+1; j<n; j++) {
            curProd *= nums[j];
            if (curProd > maxProd) {
                maxProd = curProd;
            }
        }
    }
    return maxProd;
}

int main() {
    vector<int> arr {2, 3, -2, 4};
    cout << maxProduct(arr) << endl;
}