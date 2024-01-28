#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {
    // Write your code here.
    long long int l = 1, r = n;
    if (n == 0) return 0;
    while(l <= r) {
        int mid = (l + r) >> 1;
        long long val = mid * mid;
        if (val > n) {
            r = mid - 1;
        } else if (val <= n){
            l = mid + 1;
        }
    }
    return r;
}

int main() {
    int n = 31;
    cout << floorSqrt(n) << endl;
}
