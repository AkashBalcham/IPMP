#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL, *cur = head;
    while(cur) {
        ListNode* N = cur->next;
        cur->next = prev;
        prev = cur;
        cur = N;
    }
    return prev;
}
bool isPalindrome(ListNode* head) {
    if (!head->next) return true;
    int count = 0;
    ListNode* cur = head, *l1, *l2;
    while(cur) {
        count++;
        cur = cur->next;
    }

    cur = head;
    ListNode* prev;
    int cnt = 1;
    while(cnt < count / 2) {
        prev = cur;
        cur = cur->next;
        cnt++;
    }
    if (count & 1) {
        l2 = cur->next->next;
    } else {
        l2 = cur->next;

    }
    cur->next = NULL;
    l1 = head;

    l2 = reverseList(l2);
    while(l1 and l2) {
        if (l1 -> val != l2->val) return false;
        l1 = l1->next;
        l2 = l2->next;
    }
    return true;
}