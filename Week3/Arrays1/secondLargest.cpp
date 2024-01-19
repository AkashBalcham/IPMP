#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr) {
    int n = arr.size();
    int maxElem = arr[0];
    for(int i=1; i<n; i++) {
        if (arr[i] > maxElem) {
            maxElem = arr[i];
        }
    }
    int maxDiff = INT_MAX;
    for(int i=0; i<n; i++) {
        if (arr[i] == maxElem) continue;
        if (maxElem - arr[i] < maxDiff) {
            maxDiff = maxElem - arr[i];
        }
    }
    return (maxDiff != INT_MAX ? maxElem - maxDiff : -1);
}

int main() {
    vector<int> arr { 1, 1, 1, 1, 1 };
    cout << secondLargest(arr) << endl;
}