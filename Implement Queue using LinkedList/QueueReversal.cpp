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
        if (frontNode == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = frontNode;
        frontNode = frontNode->next;

        if (frontNode == NULL)
            rearNode = NULL;

        delete temp;
    }

    void display() {
        Node* temp = frontNode;
        cout << "Queue: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

   
    void reverseQueue() {
        if (frontNode == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        stack<int> st;

      
        Node* temp = frontNode;
        while (temp != NULL) {
            st.push(temp->data);
            temp = temp->next;
        }

        
        temp = frontNode;
        while (temp != NULL) {
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }

        cout << "Queue Reversed Successfully\n";
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Original ";
    q.display();

    q.reverseQueue();

    cout << "After Reverse ";
    q.display();

    return 0;
}
