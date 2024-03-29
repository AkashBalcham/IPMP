#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    if (!head) return false;
    while(fast and fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }   
    return false;
}

int main() {
    
}