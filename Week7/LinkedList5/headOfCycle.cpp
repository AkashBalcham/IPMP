#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    bool hasCycle = false;
    while(fast and fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) {
            hasCycle = true;
            break;
        }
    }
    if (hasCycle) {
        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    return NULL;
}