#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this->data = data;
        this->next = NULL;
        
    }
};




void addhead(node* &head,int value){
    node* temp = new node(value);
    temp->next = head;
    head = temp;
    
    
}


void printlinkedlist(node* head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
        
    }
    cout<<"NULL";
}



int main(){
    int n;
    cin>>n;
    node* head = NULL;

    
    
    while(n--){
        int a;
        cin>>a;

        addhead(head,a);
    }
    
    
    
    printlinkedlist(head);
}