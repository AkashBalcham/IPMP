#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        if (arr[i] > arr[i+1]) return false;
    }
    return true;
}

int main() {
    int arr[] = { 4, 2, 6, 5, 1};
    cout << check(arr, 5) << endl;
}