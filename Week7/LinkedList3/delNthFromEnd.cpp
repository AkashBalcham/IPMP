#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* removeNthFromEnd(ListNode* head, int n) {
    int count = 1;
    if (!head->next) return NULL;
    ListNode* cur1 = head, *cur2 = head;
    while(count < n) {
        cur1 = cur1->next;
        count++;
    }

    ListNode* prev = NULL;
    while(cur1->next) {
        prev = cur2;
        cur2 = cur2->next;
        cur1 = cur1->next;
    }
    if (!prev) {
        return cur2->next;
    } else {
        cout << prev->val << endl;
        cout << cur2->val << endl;
        prev->next = cur2->next;
    }
    return head;
}