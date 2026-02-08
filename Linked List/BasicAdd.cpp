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


void add(node* &head, node* &tail, int value){
    if(head == NULL){
        node* temp = new node(value);
        head = temp;
        tail = head;
    }
    else{
        node* temp = new node(value);
        tail->next = temp;
        tail = temp;
    }
}



void print(node* head){
    while( head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;

    }
    cout<<"NULL";
}



int main(){
    int n;
    cin>>n;

    node* head = NULL;
    node* tail = NULL;

    while(n--){
        int a;
        cin>>a;
        add(head,tail,a);
    }


    print(head);




}