#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n) {
    vector<int> res;
    int maxSoFar = -1;
    for(int i=n-1; i>=0; i--) {
        if (arr[i] >= maxSoFar) {
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int arr[] = { 16, 17, 4, 3, 5, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length: " << n << endl;
    vector<int> res = leaders(arr, n);
    for(int i: res) {
        cout << i << " ";
    }
    cout << endl;
}