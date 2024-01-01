#include <bits/stdc++.h>
using namespace std;

vector<int>AllPrimeFactors(int n) {
    set<int> primes;
    vector<int> res;
    for(int i=2; i<=n; i++) {
        while(n%i == 0) {
            n /= i;
            if(!primes.count(i)) {
                primes.insert(i);
            }
        }
    }
    for(auto it = primes.begin(); it != primes.end(); it++) {
        res.emplace_back(*it);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    AllPrimeFactors(n);
}