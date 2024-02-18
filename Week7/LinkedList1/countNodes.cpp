#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int getCount(struct Node* head){
    int count = 0;
    while(head) {
        count++;
        head = head->next;
    }
    return count;
    //Code here

}

int main() {
    
}