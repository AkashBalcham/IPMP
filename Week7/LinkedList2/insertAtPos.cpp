#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

void addNode(Node *head, int pos, int data) {
   // Your code here
   Node* cur = head;
   int count = 1;
   while(cur and count<=pos) {
       cur=cur->next;
       count++;
   }
   Node* temp = new Node();
   temp->data = data;
   temp->next = temp->prev = NULL;
   temp->prev = cur;
   temp->next = cur->next;
}

int main() {
    
}