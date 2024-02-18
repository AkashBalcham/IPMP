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