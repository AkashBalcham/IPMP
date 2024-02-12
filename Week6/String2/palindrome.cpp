#include <bits/stdc++.h>
using namespace std;

string is_palindrome(int n) {
    // Code here.
    string x = "";
    while(n > 0) {
        int r = n%10;
        x += to_string(r);
        n/=10;
    }
    int l=0, r=x.length()-1;
    while(l <= r) {
        if (x[l] != x[r]) return "No";
        l++; r--;
    }
    return "Yes";
}

int main() {
    int n = 555;
    cout << is_palindrome(n) << endl;
}