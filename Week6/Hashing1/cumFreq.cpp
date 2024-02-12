#include <bits/stdc++.h>
using namespace std;

vector<int> countFreq(int a[], int n) { 
    // Complete the function
    sort(a, a+n);
    vector<int> res;
    int cnt = 1;
    int i=1;
    while(i<n) {
        if (a[i] == a[i-1]) {
            cnt++;
            
        } else {
            if(res.size() == 0) res.push_back(cnt);
            else res.push_back(cnt + res[res.size() - 1]);
            cnt = 1;
        }
        i++;
    }
    if(res.size() == 0) res.push_back(cnt);
    else res.push_back(cnt + res[res.size() - 1]);
    return res;
} 

int main() {
    int arr[] = {1, 2, 1, 2, 1, 2};
    int n = 6;
    vector<int> res = countFreq(arr, n);
}