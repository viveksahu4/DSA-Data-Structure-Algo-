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

void insertattail(Node* &head,Node* &tail,int value){
    if(head == NULL){
        Node* temp = new Node(value);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(value);
        tail->next = temp;
        tail = temp;
    }
}




void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        insertattail(head,tail,a);
    }
    printLL(head);
    
    return 0;
}