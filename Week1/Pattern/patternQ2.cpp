#include <bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    for(int i=n; i>=1; i--) {
      for (int j = 1; j <= i; j++) {
          printf("%d ", j);
      }
      printf("\n");
    }
}

int main() {
    int n;
    cin >> n;
    nNumberTriangle(n);
}