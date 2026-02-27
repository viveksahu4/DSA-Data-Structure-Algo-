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

// Main Logic 
// 5
// 1 2 3 4 5
// 1 -> 2 -> 3 -> 4 -> 5 -> NULL


void InsertAtTail(Node* &head, Node* &tail,int value){ // this line create function Insertat tail carry parameter head tail and value 
    if(head == NULL){ // first check if head equal equal to NULL or not if yes then enter then if condition and execute then if condition 
        Node* temp = new Node(value); // create new node name is temp
        head = temp;  // first node that why head equal to temp
        tail = temp; // and also tail equal to temp;
    }
    else{ // this is else condition if if condiiton is not not right then come to else part and execute else part
        Node* temp = new Node(value);  // create new node name is temp
        tail->next = temp; // tail-> next is equal to temp 
        tail = temp; // and tail is equal to temp
    }
}



void printll(Node* head){
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
        int c;
        cin>>c;

        InsertAtTail(head,tail,c);  // here call function  + pass meter 
    }


    printll(head);
}