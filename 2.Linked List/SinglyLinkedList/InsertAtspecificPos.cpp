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


void insertatspec(node* &head,node* &tail,int value,int pos){
    if(pos == 1 || head == NULL){
        node* temp = new node(value);
        temp->next = head;
        head = temp;
        tail = temp;

        
        
    }
    else{
        node* temp = new node(value);
        int i = 1;
        node* nhead = head;
        while(i < pos - 1  && nhead != NULL){
            nhead = nhead->next;
            i++;
        }
        temp->next = nhead->next;
        nhead->next  = temp;
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
        int value,pos;
        cin>>value>>pos;
        insertatspec(head,tail,value,pos);
    }
    
    printll(head);
}





































// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next = NULL;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;

//     }


// };

// void InsertAtSpePos(Node* &head, Node* &tail, int value,int pos){
    

//     if(pos == 1 || head == NULL){
//         Node* temp = new Node(value);
//         temp->next = head;
//         head = temp;
//         tail = temp;
//     }
//     else{
//         Node* temp = new Node(value);
//         int i = 1;
//         Node* tempq = head;
//         while(i < pos - 1  && tempq != NULL ){
//             tempq = tempq -> next;
//             i++;
            
//         }
        
//         temp->next = tempq->next;
//         tempq->next = temp;
//     }
// }



// void printll(Node* head){
//     while(head != NULL){
//         cout<<head->data<<" ";
//         head = head->next;
//     }

// }
// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;


//         InsertAtSpePos(head,tail,10,1);
//         InsertAtSpePos(head,tail,500,2);
//         InsertAtSpePos(head,tail,100,3);

//     printll(head);
// }


























// // #include<bits/stdc++.h>
// // using namespace std;
// // class Node{
// //     public:
// //     int data;
// //     Node* next = NULL;

// //     Node(int data){
// //         this->data = data;
// //         this->next = NULL;

// //     }


// // };

// // void InsertAtSpePos(Node* &head, Node* &tail, int value,int pos){
// //     Node* newtemp   = new Node(value);

// //     //case1: Empty List
// //     if(head == NULL){
// //         head =  newtemp;
// //         tail  = newtemp;
// //         return;
// //     }

// //     //case2: Insert at head
// //     if(pos == 1){
// //         newtemp->next =  head;
// //         head = newtemp;
// //         return;
// //     }

// //     //traverse to (pos - 1) node
// //     Node* temp = head;
// //     int i = 1;
// //     while(i < pos -1 && temp->next != NULL){
// //         temp = temp->next;
// //         i++;
// //     }

// //     //Insert at end
// //     if(temp->next == NULL){
// //         temp->next = newtemp;
// //         tail = newtemp;

// //     }
// //     else{
// //         newtemp->next = temp->next;
// //         temp->next = newtemp;
// //     }
// // }



// // void printll(Node* head){
// //     while(head != NULL){
// //         cout<<head->data<<" ";
// //         head = head->next;
// //     }

// // }
// // int main(){
// //     Node* head = NULL;
// //     Node* tail = NULL;
// //     int n;
// //     cin>>n;
// //     while(n--){
// //         int a,b;
// //         cin>>a>>b;
// //         InsertAtSpePos(head,tail,a,b);
// //     }

// //     printll(head);
// // }