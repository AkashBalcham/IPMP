#include <bits/stdc++.h>
using namespace std;

int kthMissing(vector<int> arr, int k) {
    int curMissing = 0, n = arr.size();
    int isMissing = false;
    int i;
    for(i=1; i<n; i++) {
        curMissing += arr[i] - arr[i-1] - 1;
        if (curMissing > 0) isMissing = true;
        if (curMissing >= k) {
            curMissing -= (arr[i] - arr[i-1] - 1);
            break;
        }
    }
    if (!isMissing) return -1;
    return arr[i-1] + k - curMissing;
}


int main() {
    vector<int> arr {32, 33, 35};   // {1, 27, 45}
    int k = 2;
    cout << kthMissing(arr, k) << endl;
}