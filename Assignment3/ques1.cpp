#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};
Node* sortList(Node* head){
    int cnt[3] = {0};
    Node* curr = head;
    while(curr){
        cnt[curr->data]++;
        curr = curr->next;
    }
    curr = head;
    int i = 0;
    while(curr){
        if(cnt[i] == 0) i++;
        else {
            curr->data = i;
            cnt[i]--;
            curr = curr->next;
        }
    }
    return head;
}
