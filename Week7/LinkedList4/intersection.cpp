#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int num1 = 0, num2 = 0;
    ListNode* cur = headA;
    while(cur) {
        num1++;
        cur = cur->next;
    }
    cur = headB;
    while(cur) {
        num2++;
        cur = cur->next;
    }
    cur = headA;
    ListNode* cur2 = headB;
    if (num1 > num2) {
        for (int i=0; i<num1-num2; i++) {
            cur = cur->next;
        }
    } else if (num2 > num1) {
        if (num2 > num1) {
            for(int i=0; i<num2-num1; i++) {
                cur2 = cur2->next;
            }
        }
    }
    while(cur and cur2) {
        if (cur == cur2) return cur;
        cur = cur->next;
        cur2 = cur2->next;
    }
    return NULL;
}

int main() {}