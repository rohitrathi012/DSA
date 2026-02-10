#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(NULL) {}
    ListNode(int x): val(x), next(NULL) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode* o = head;
        ListNode* e = head->next;
        ListNode* es = e;
        while(e && e->next){
            o->next = e->next;
            o = o->next;
            e->next = o->next;
            e = e->next;
        }
        o->next = es;
        return head;
    }
};
