#include <bits/stdc++.h>
using namespace std;

bool pow4(int x) {
    if (x == 1) return true;
    if (x % 4 != 0) return false;
    return pow4(x / 4);
}

int main() {
    int n;
    cin >> n;
    cout << pow4(n) << endl;
}