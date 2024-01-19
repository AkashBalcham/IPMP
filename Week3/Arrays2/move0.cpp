#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr) {
    int n = arr.size();
    int j=-1;
    for(int i=0; i<n; i++) {
        if (arr[i] == 0) {
            j=i;
            break;
        }
    }

    if (j==-1) return;
    for(int i=j+1; i<n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr {3, 5, 0, 0, 4};
    moveZeroes(arr);
    for(int i: arr) {
        cout << i << " ";
    }
    cout << endl;
}