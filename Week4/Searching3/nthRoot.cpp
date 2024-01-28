#include <bits/stdc++.h>
using namespace std;

int f (int mid, int n, int m) {
  long long int ans = 1;
  for(int i=0; i<n; i++) {
    ans *= mid;
    if (ans > m) return 2;
  }
  if (ans == m) return 1;
  return 0;
}


int NthRoot(int n, int m) {
  // Write your code here.
  int l = 1, r = m;
  while(l <= r) {
    int mid = (l+r) >> 1;
    int sx = f(mid, n, m);
    if (sx == 1) return mid;
    if (sx == 0) l = mid + 1;
    else r = mid - 1;
  }
  return -1;
}

int main() {
    int n = 3, m = 27;
    cout << NthRoot(n, m) << endl;
}