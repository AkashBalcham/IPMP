#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *insertAtBegining(Node *head, int x) {
    // Your code here
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    return temp;
}


//Function to insert a node at the end of the linked list.
Node *insertAtEnd(Node *head, int x)  {
    // Your code here
    Node* cur = head;
    while(cur->next) {
        cur = cur->next;
    }
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    cur->next = temp;
    return head;
}