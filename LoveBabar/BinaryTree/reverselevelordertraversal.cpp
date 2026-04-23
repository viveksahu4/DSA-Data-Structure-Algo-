#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right; 


    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};



node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data); 

    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<< "Enter data for inserting in right: "<<data<<endl;
    root->right = buildTree(root->right);
    return root;

    
}


void levelOrderTraversal(node* root){
    queue<node*> q; 
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp  = q.front();
        
        q.pop();



        if(temp == NULL){ // means old level are completely traversal
            cout<<endl;
            if(!q.empty()){ // queue still have some child nodes 
                q.push(NULL);
            }

        }
        else{
            cout<<temp->data<<" ";
            if(temp -> left){
                q.push(temp->left);
            }
            if(temp ->right){
                q.push(temp->right);
            }
        }

    }

}

#include<stack>

void reverseLevelOrder(node* root){
    if(root == NULL) return;

    queue<node*> q;
    stack<node*> s;

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        s.push(temp);

        // IMPORTANT: right first, then left
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
    }

    // print in reverse order
    while(!s.empty()){
        cout << s.top()->data << " ";
        s.pop();
    }
}


int main(){
    node* root = NULL;

    //creating a tree
    root = buildTree(root);


    // level order 
    //data 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<"Printing the level order traversal o/p: "<<endl;
    levelOrderTraversal(root);




cout << "\nReverse Level Order Traversal: " << endl;
reverseLevelOrder(root);




    return 0;
}