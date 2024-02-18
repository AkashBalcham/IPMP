#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* deleteMiddle(ListNode* head) {
    if (!head or !head->next) return NULL;
    ListNode* prev = NULL, *slow = head, *fast = head;
    while(fast and fast->next) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = slow->next;
    return head;    
}