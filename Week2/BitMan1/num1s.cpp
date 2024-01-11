#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
    vector<int> res(n+1, 0);
    for(int i=0; i<=n; i++) {
        int count = 0;
        int x = i;
        while(x != 0) {
            x = x & (x-1);
            count++;
        }
        res[i] = count;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = countBits(n);
    for(int i: res) {
        cout << i << " ";
    }
    cout << endl;
}