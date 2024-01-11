#include <bits/stdc++.h>
using namespace std;

long long int power(int b, int p) {
    int prd = 1;
    if (p == 0) return prd;
    for(int i=0; i<p; i++) {
        prd *= b;
    }
    return prd;
}

int SumofDigits(int A, int B)
{
    // Code here
    long long int a = A;
    if (B > 0) {
        a = power(A, B);
    }
    if (a < 10) return a;
    long long int sum = 0;
    while(a > 0) {
        sum += a % 10;
        a /= 10;
    }
    return SumofDigits(sum, -1);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << SumofDigits(a, b) << endl;
}