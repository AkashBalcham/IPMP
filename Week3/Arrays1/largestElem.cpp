#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
    int n = arr.size();
    int maxElem = arr[0];
    for(int i=1; i<n; i++) {
        if (arr[i] > maxElem) {
            maxElem = arr[i];
        }
    }
    return maxElem;
}

int main() {
    vector<int> arr { 4, 2, 6, 5, 1};
    cout << largest(arr) << endl;
}