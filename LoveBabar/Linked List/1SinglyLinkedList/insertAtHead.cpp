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
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" <- ";
        head = head->next;
    }
    
}
int main(){
    Node* head = NULL;
    
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        insertathead(head,a);
    }
    printLL(head);
    
    return 0;
}