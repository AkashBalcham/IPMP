#include <bits/stdc++.h>
using namespace std;

bool pow3(int x) {
    if (x == 1) return true;
    if (x % 3 != 0) return false;
    return pow3(x / 3);
}

int main() {
    int n;
    cin >> n;
    cout << pow3(n) << endl;
}