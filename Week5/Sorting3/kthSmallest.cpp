#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    return arr[k-1];
}

int main() {
    vector<int> arr {7, 10, 4, 20, 15};
    int k = 4;
    cout << kthSmallest(arr, k) << endl;
}