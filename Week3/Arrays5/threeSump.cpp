#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr, int target) {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i=0; i<n-2; i++) {
        int comp = target - arr[i];
        int l = i+1, r = n-1;
        while(l < r) {
            int sum = arr[l] + arr[r];
            if (sum == comp) {
                vector<int> row(3);
                row[0] = arr[i];
                row[1] = arr[l];
                row[2] = arr[r];
                res.push_back(row);
            } else if (sum < comp) {
                l++;
            } else {
                r--;
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr {-1,0,1,2,-1,-4};
    int target = 0;
}