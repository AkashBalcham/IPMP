#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int target) {
    set<vector<int>> s;
    sort(arr.begin(), arr.end());
    long long int n = arr.size();
    for(long long int i=0; i<n-3; i++) {
        for(long long int j=i+1; j<n-2; j++) {
            long long int comp = target - arr[i] - arr[j];
            long long int l = j+1, r = n-1;
            while(l < r) {
                long long int sum = arr[l] + arr[r];
                if (sum == comp) {
                    vector<int> row(4);
                    row[0] = arr[i];
                    row[1] = arr[j];
                    row[2] = arr[l];
                    row[3] = arr[r];
                    sort(row.begin(), row.end());
                    s.insert(row);
                    l++;
                    r = n-1;
                } else if (sum < comp) {
                    l++;
                } else {
                    r--;
                }
            }
        }
    }
    vector<vector<int>> res (s.begin(), s.end());
    return res;
}

int main() {
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> res = fourSum(arr, target);
    for(auto it: res) {
        for(int i: it) {
            cout << i << " ";
        }
        cout << endl;
    }
}