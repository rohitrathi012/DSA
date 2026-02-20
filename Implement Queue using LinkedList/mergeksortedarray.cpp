#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* frontNode;
    Node* rearNode;

public:
    Queue() {
        frontNode = rearNode = NULL;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);
        if (rearNode == NULL) {
            frontNode = rearNode = temp;
            return;
        }
        rearNode->next = temp;
        rearNode = temp;
    }

    void dequeue() {
        if (frontNode == NULL)
            return;

        Node* temp = frontNode;
        frontNode = frontNode->next;

        if (frontNode == NULL)
            rearNode = NULL;

        delete temp;
    }

    int front() {
        if (frontNode == NULL)
            return -1;
        return frontNode->data;
    }

    bool isEmpty() {
        return frontNode == NULL;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
}
