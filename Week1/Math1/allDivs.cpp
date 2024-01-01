#include <bits/stdc++.h>
using namespace std;

void printDivs(int n) {
    set<int> divs;
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i == 0) {
            divs.insert(i);
            divs.insert(n / i);
        }
    }
    for(auto itr = divs.begin(); itr != divs.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
}

int main() {}