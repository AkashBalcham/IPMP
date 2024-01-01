#include <bits/stdc++.h>
using namespace std;

int power(int b, int p) {
	int prd = 1;
	for (int i = 0; i < p; i++) {
		prd *= b;
	}
	return prd;
}

bool checkArmstrong(int n){
	//Write your code here
	int refNum1 = n, refNum2 = n, sum = 0, digits = 0;
	while (refNum1 > 0) {
		int r = refNum1 % 10;
		digits++;
		refNum1 /= 10;
	}
	while (refNum2 > 0) {
		int r = refNum2 % 10;
		sum += power(r, digits);
		refNum2 /= 10;
	}
	return sum == n;
}

int main() {
    int n;
    cin >> n;
    cout << checkArmstrong(n) << endl;
}