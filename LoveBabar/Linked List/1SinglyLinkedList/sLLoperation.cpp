#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertathead(Node* &head,int value){
    // node create 
    Node* temp=  new Node(value);
    temp->next = head;
    head  = temp;
}


void printsll(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


int main(){

    Node* node1 = new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node* head = node1;
    printsll(head);
    insertathead(head,12);
    insertathead(head,16);

    printsll(head);
    return 0;
}