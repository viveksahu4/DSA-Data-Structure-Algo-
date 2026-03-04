#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data  = data;
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
        tail   = temp;
    }
}

void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}

void  deletepos(Node* &head,int pos){
    if(head == NULL){
        cout<<"List empty"<<endl;
        return;
    }
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    else{
        Node* store = head;
        int i = 1;
        while(i < pos - 1 && store->next != NULL){
            store = store->next;
            i++;
        }
        if(store->next == NULL){
            cout<<"out of range"<<endl;
            return;
        }
        Node* temp = store->next;
        store->next = temp->next;
        delete temp;
    }
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



    deletepos(head,1);
    cout<<endl;
    printLL(head);
    return 0;
}