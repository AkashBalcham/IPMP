#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr, int target) {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i=0; i<n-3; i++) {
        for(int j=1; j<n-2; j++) {
            int comp = target - arr[i];
            int l = j+1, r = n-1;
            while(l < r) {
                int sum = arr[l] + arr[r];
                if (sum == comp) {
                    vector<int> row(4);
                    row[0] = arr[i];
                    row[1] = arr[j];
                    row[2] = arr[l];
                    row[3] = arr[r];
                    res.push_back(row);
                } else if (sum < comp) {
                    l++;
                } else {
                    r--;
                }
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr {-1,0,1,2,-1,-4};
    int target = 0;
}