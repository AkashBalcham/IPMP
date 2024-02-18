#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* next;
};

Node* head = NULL;

bool search(Node* head, int key) {
    while(head) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}

int main() {

}
