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

void Insertattail(node* &head,node* &tail,int value){
    if(head == NULL){
        node* temp = new node(value);
        head = temp;
        tail = temp;
    }

    else{
        node* temp = new node(value);
        tail->next = temp;
        tail  = temp;
        

        
    }
}


void printll(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"NULL";

}



int main(){
    node* head = NULL;
    node* tail = NULL;

    Insertattail(head,tail,10);
    Insertattail(head,tail,20);
    Insertattail(head,tail,30);

    printll(head);


}