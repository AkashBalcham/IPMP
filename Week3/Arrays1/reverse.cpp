#include <bits/stdc++.h>
using namespace std;

string rev(string s) {
    int l=0, r = s.length()-1;
    while(l < r) {
        swap(s[l], s[r]);
        l++;
        r--;
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << rev(s) << endl;
}