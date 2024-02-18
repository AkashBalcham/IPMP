#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* sortList(ListNode* head) {
    vector<int> elems;
    ListNode* cur = head;
    while(cur) {
        elems.push_back(cur->val);
        cur = cur->next;
    }
    sort(elems.begin(), elems.end());
    ListNode* dummy = new ListNode(0);
    cur = dummy;
    for(int i: elems) {
        cur->next = new ListNode(i);
        cur = cur->next;
    }
    return dummy->next;
}