#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while(fast and fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main() {}