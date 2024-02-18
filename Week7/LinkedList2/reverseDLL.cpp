#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

Node* reverseDLL(Node * head) {
    //Your code here
    Node* cur = head;
    Node* p = NULL;
    while(cur) {
        Node* Next = cur->next;
        cur->next = cur->prev;
        cur->prev = Next;
        p = cur;
        cur = cur->prev;
    }
    return p;
}

int main () {}