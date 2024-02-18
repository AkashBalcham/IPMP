#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *cur1 = l1, *cur2 = l2;
    ListNode *head = NULL, *cur3;
    int sumDigit, carry = 0;
    while(cur1 and cur2) {
        sumDigit = (cur1->val + cur2->val + carry) % 10;
        carry = (cur1->val + cur2->val + carry) / 10;
        ListNode* temp = new ListNode(sumDigit);
        // temp->val = sumDigit;
        if (head == NULL) {
            head = temp;
            cur3 = temp;
        } else {
            cur3->next = temp;
            cur3 = temp;
        }
        cur1 = cur1->next;
        cur2 = cur2->next;

    }
    while(cur1) {
        int s = cur1->val + carry;
        cur3->next = new ListNode(s % 10);
        cur3 = cur3->next;
        carry = s / 10;
        cur1 = cur1->next;
    }
    while(cur2) {
        int s = cur2->val + carry;
        cur3->next = new ListNode(s % 10);
        cur3 = cur3->next;
        carry = s / 10;
        cur2 = cur2->next;
    }
    if (carry > 0) {
        cur3->next = new ListNode(carry);
    }
    return head;
}