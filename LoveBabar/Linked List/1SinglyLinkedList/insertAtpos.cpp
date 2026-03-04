#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertatpos(Node* &head, int pos, int value) {
    if (pos == 1) {
        Node* temp = new Node(value);
        temp->next = head;
        head = temp;
    }
    else {
        Node* store = head;
        int i = 1;
        while (i < pos - 1) {   // traverse to (pos-1)th node
            store = store->next;
            i++;
        }
        // Now store points to (pos-1)th node
        Node* temp = new Node(value);  // create new node AFTER loop
        temp->next = store->next;      // link new node to rest of list
        store->next = temp;            // link previous node to new node
    }
}

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        insertatpos(head, a, b); 
    }
    printLL(head);

    return 0;
}