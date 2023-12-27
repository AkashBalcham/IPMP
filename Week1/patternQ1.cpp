#include <bits/stdc++.h>
using namespace std;

void nForest(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}

int main() {
    int n;
    cin >> n;
    nForest(n);
}