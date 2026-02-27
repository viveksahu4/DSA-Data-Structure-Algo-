#include<bits/stdc++.h>  // This line  header  for consider approx. all  the header file in once 
using namespace std; // this line for cout cin user input o/p without std:: write only used cin cout
class Node{ //this line for create class
    public:   // public 
    int data;  //data
    Node* next; //Node -> next =  NULL

    Node(int data){              //constructor
        this->data = data;
        this->next = NULL;
    }

};

//this is main logic for Insert at head 
// userinput n = 5 
// value : 1 2 3 4 5 
// o/p : 5 4 3 2 1 

void InsertAtHead(Node* &head,int value){ // this line void function pass parameter or attribute head and value 
    Node* temp = new Node(value);  // this line create new node that name is temp 
    temp->next = head; // this line temp->next = head means that address temp is hold is equal to head
    head = temp; // then head equal to temp 
}

//this is print function 
void printll(Node* head){ //here only pass head parameter because print the linked list here operation is InsertAtHead so like    ...so. . 4 3  2  1
    while(head != NULL){   //head not equal to NULL then come to while loop
        cout<<head->data<<" <- "; // this line say print head->data with space  
        head = head->next; // this line move for next head equal to head-> next
    }
    cout<<" NULL ";
}

int main(){ // this is main function 
    Node* head = NULL;  // firstly initialize head with NULL 

    int n; // for size of linked list 
    cin>>n; // user input 

    while(n--){   // this is while loop until condiiton fail this loop will work
        int c;  // this is integer value 
        cin>>c; // this line say take the user input value 

        InsertAtHead(head,c); // here call +  pass the parameter 
    }

    printll(head); // here call and pass the head parameter
    
}