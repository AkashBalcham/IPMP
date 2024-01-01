#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
	int numDigits = 0; 
	while (n > 0) {
		numDigits++;
		n /= 10;
	}
	return numDigits;
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
}