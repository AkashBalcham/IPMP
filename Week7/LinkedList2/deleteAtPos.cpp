#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

Node* deleteNode(Node *head, int x) {
    //Your code here
    Node* cur = head;
    Node* prev1 = NULL;
    int count = 1;
    while(cur and (count < x)) {
        prev1 = cur;
        cur=cur->next;
        count++;
    }
    if (cur->next == NULL) {
        prev1->next = NULL;
    } else {
        prev1->next = cur->next;
        cur->next->prev = prev1;
    }
    return head;
}

int main() {}