#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    ListNode* dummy = new ListNode(0);
    ListNode* cur = dummy;
    while(true) {
        bool flag = false;
        int minIndex = lists.size();
        int minVal = INT_MAX;
        for(int i=0; i<lists.size(); i++) {
            if (lists[i]) {
                flag = true;
                if (lists[i]->val < minVal) {
                    minVal = lists[i]->val;
                    minIndex = i;
                }
            }
        }
        if (flag) {
            cur->next = new ListNode(minVal);
            cur = cur->next;
            lists[minIndex] = lists[minIndex]->next;
        } else {
            return dummy->next;
        }
    }
    return dummy->next;
}