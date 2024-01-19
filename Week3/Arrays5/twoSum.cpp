#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &arr, int target) {
    set<int> s;
    vector<int> res(2);
    int n = arr.size();
    for(int i=0; i<n; i++) {
        int comp = target - arr[i];
        if (s.count(comp)) {
            res[0] = arr[i];
            res[1] = comp;
            return res;
        } else {
            s.insert(comp);
        }
    }
    return res;
}

int main() {
    vector<int> arr {2, 7, 11, 15};
    int target = 9;
}