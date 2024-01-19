#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n) {
    int l = 0, r = n-1, mid = 0;
    while (mid <= r) {
        if (a[mid] == 0) {
            swap(a[l++], a[mid++]);
        } else if (a[mid] == 1) {
            mid++;
        } else {
            swap(a[mid], a[r--]);
        }
    }
}

int main() {
    int a[] = {1, 0, 2, 0, 1, 1, 2, 0};
    int n = sizeof(a) / sizeof(a[0]);
    sort012(a, n);
}
