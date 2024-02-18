#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* sortList(Node *head){
    // Write your code here.
    Node* cur = head;
    vector<int> arr;
    while(cur) {
        arr.push_back(cur->data);
        cur = cur->next;
    }
    int n = arr.size();
    int l=0, m=0, r=n-1;
    while(m <= r) {
        if (arr[m] == 0) {
            swap(arr[l], arr[m]);
            l++; m++;
        } else if (arr[m] == 2) {
            swap(arr[m], arr[r]);
            r--;
        } else {
            m++;
        }
    }
    Node* dummy = new Node(0);
    cur = dummy;
    for(int i: arr) {
        cur->next = new Node(i);
        cur = cur->next;
    }
    return dummy->next;
}

int main() {}
