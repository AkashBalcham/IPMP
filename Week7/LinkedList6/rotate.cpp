#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next) return head;
    int cnt = k;
    int count = 0;
    ListNode* hhh = head;
    ListNode *slow = head, *fast = head;
    while(count < cnt) {
        count++;
        cout << fast->val << endl;
        fast = fast->next;
    }
    ListNode* prev = NULL;
    while(fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }
    ListNode* head2 = slow->next;
    slow->next = NULL;

    ListNode* cur2 = head2;
    while(cur2->next) cur2 = cur2->next;
    cur2->next = head;
    return head2;
}