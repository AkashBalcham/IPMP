#include <bits/stdc++.h>
using namespace std;

int pal(int n){
	int rev = 0, ref = n;
    while(n > 0) {
        int r = n%10;
        rev = rev * 10 + r;
        n /= 10;
    }
	return rev == ref;
}

int main() {
    int n;
    cin >> n;
    cout << pal(n) << endl;
}