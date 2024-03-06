#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node* random;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr), random(nullptr) {}
};

Node* copyRandomList(Node* head) {
    if (!head) return NULL;
    unordered_map<Node*, Node*> mp;
    Node* cur = head;
    while(cur) {
        mp[cur] = new Node(cur->val);
        cur = cur->next;
    }

    cur = head;
    while(cur) {
        mp[cur]->next = mp[cur->next];
        mp[cur]->random = mp[cur->random];
        cur = cur->next;
    }
    return mp[head];
}

int main() {
    
} 