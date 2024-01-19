#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n) {
    // code here
    vector<int> res(2);
    vector<int> cnt(n+1, 0);
    for(int i=0; i<n; i++) {
        cnt[arr[i]]++;
    }
    for(int i=1; i<=n; i++) {
        if (cnt[i] == 2) {
            res[0] = i;
        }
        if (cnt[i] == 0) {
            res[1] = i;
        }
    }
    return res;
}

int main() {
    vector<int> arr {1, 3, 3};
    vector<int> res = findTwoElement(arr, arr.size());
}