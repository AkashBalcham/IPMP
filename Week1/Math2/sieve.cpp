#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<bool> prime(n+1, true);
    for(int i=2; i<=n; i++) {
        if(prime[i]) {
            for(int j=2*i; j<=n; j+=i) {
                prime[j] = false;
            }
        }
    }
    vector<int> res;
    for(int i=2; i<=n; i++){
        if(prime[i]) {
            res.emplace_back(i);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    sieve(n);
}