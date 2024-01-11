#include <bits/stdc++.h>
using namespace std;

int solve(int i, int sum, int n) {
    if (sum > n) return -1;
    if (sum == n) return i-1;
    return solve(i+1, sum + i, n);
}

int main() {
    int n;
    cin >> n;
    return solve(1, 0, n);
}