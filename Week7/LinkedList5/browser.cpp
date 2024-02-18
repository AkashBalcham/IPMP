#include <bits/stdc++.h>
using namespace std;

struct Node {
    string page;
    Node *next, *prev;
    Node(string x) : page(x), next(nullptr), prev(nullptr) {}
};

class BrowserHistory {
public:
    Node *cur = NULL;

    BrowserHistory(string homepage) {
        Node* cur = new Node(homepage);
    }
    
    void visit(string url) {
        Node* temp = new Node(url);
        cur->next = temp;
        temp->prev = cur;
        cur = temp;
    }
    
    string back(int steps) {
        int count = 0;
        Node* c = cur;
        while(c->prev and count < steps) {
            c = c->prev;
            count++;
        }
        cur = c;
        return cur->page;
    }
    
    string forward(int steps) {
        int count = 0;
        Node* c = cur;
        while(c->next and count < steps) {
            c = c->next;
            count++;
        }
        cur = c;
        return cur->page;
    }
};