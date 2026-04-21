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

void InsertAtTail(node* &head, node* &tail,int value){ // this line create function Insertat tail carry parameter head tail and value 
    if(head == NULL){ // first check if head equal equal to NULL or not if yes then enter then if condition and execute then if condition 
        node* temp = new node(value); // create new node name is temp
        head = temp;  // first node that why head equal to temp
        tail = temp; // and also tail equal to temp;
    }
    else{ // this is else condition if if condiiton is not not right then come to else part and execute else part
        node* temp = new node(value);  // create new node name is temp
        tail->next = temp; // tail-> next is equal to temp 
        tail = temp; // and tail is equal to temp
    }
}


void deleteop(node* &head,int pos){
    if(pos == 1){
        head = head->next;

    }
    else{
        node* aman = head;
        int i =1;
        while(i < pos - 1){
            aman = aman->next;
            i++;
        }

        aman->next = aman->next->next;

    }
}
void printll(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a;
        InsertAtTail(head,tail,a);
        
    }
    deleteop(head,1);
    
    printll(head);
}

