#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverse(ListNode* head) {
    ListNode* cur = head;
    ListNode* prev = NULL;
    while(cur) {
        ListNode* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    vector<ListNode*> heads;
    int i=0;
    ListNode* cur = head;
    ListNode *tempHead, *nextHead;
    while(cur) {
        i = 1;
        tempHead = cur;
        while(i<k and cur) {
            cur = cur->next;
            i++;
        }
        if(cur) {
            nextHead = cur->next;
            cur->next = NULL;
            heads.push_back(reverse(tempHead));
        } else {
            nextHead = NULL;
            heads.push_back(tempHead);
        }
        cur = nextHead;
    }
    i = 0;
    ListNode* blahCur;
    cur = heads[0];
    while(i < heads.size()-1) {
        ListNode* blahCur = heads[i];
        while(blahCur->next) {
            blahCur=blahCur->next;
        }
        blahCur->next = heads[i+1];
        i++;
    }
    cur = heads[0];
    while(cur) {
        cur = cur->next;
    }
    return heads[0];
}