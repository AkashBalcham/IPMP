#include <bits/stdc++.h>
using namespace std;

int singNumber(vector<int> &arr) {
    int x = 0;
    for(int i: arr) {
        x ^= i;
    }
    return x;
}

int main() {
    vector<int> arr {4, 1, 4, 2, 2};
    cout << singNumber(arr) << endl;
}