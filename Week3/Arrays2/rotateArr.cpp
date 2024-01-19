#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int d) {
    int n = arr.size();
    vector<int> temp;
    for(int i=0; i<d; i++) {
        temp.push_back(arr[i]);
    }

    for(int i=d; i<n; i++) {
        arr[i-d] = arr[i];
    }
    for(int i=n-d; i<n; i++) {
        arr[i] = temp[i-n+d];
    }
}

int main() {
    vector<int> arr { 1, 2, 3, 4, 5, 6, 7 };
    int d = 23;
    d = d % arr.size();
    rotate(arr, d);
    for(int i: arr) {
        cout << i << " ";
    }
    cout << endl;
}