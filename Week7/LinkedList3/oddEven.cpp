#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* oddEvenList(ListNode* head) {
    if (!head or !(head->next)) return head;
    ListNode *cur = head;
    ListNode* dummy1 = new ListNode(0), *dummy2 = new ListNode(0);
    ListNode* cur1 = dummy1, *cur2 = dummy2;
    int count = 1;
    while(cur) {
        if (count & 1) {
            cur1->next = new ListNode(cur->val);
            cur1 = cur1->next;
        } else {
            cur2->next = new ListNode(cur->val);
            cur2 = cur2->next;
        }
        count++;
        cur = cur->next;
    }
    cur = dummy1;
    while(cur->next) {
        cur = cur->next;
    }
    cur->next = dummy2->next;
    return dummy1->next;

}

int main() {}