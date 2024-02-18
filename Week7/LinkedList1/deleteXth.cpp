#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* deleteNode(Node *head,int x) {
    //Your code here
    Node* cur = head, *prev = NULL;
    if (x == 1) return head->next;
    int count  = 1;
    while(cur and count < x) {
        prev = cur;
        cur = cur->next;
        count++;
    }
    prev->next = cur->next;
    return head;
    
}

int main() {

}