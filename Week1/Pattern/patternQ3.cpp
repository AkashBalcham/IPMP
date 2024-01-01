#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i - 1; j++) {
          cout << " ";
      }
      for (int j = 1; j <= 2 * (n - i + 1) - 1; j++) {
          cout << '*';
      }
      cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    nStarTriangle(n);
}