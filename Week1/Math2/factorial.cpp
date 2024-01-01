#include <bits/stdc++.h>
using namespace std;

long long int factorial(int N){
    //code here
    long long int prd = 1;
    if(N <= 1) return prd;
    for(int i=2; i<=N; i++) {
        prd *= i;
    }
    return prd;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}