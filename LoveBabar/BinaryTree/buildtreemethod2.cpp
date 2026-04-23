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
    
    if(data == -1){
        return NULL;
    }
    root = new node(data); 
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


void postorder(node* root){
    // base case  LRN
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void  buildfromlevelorder(node* &root){
    queue<node*> q;
    cout<<"Enter data from root: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}


int main(){
    node* root = NULL;
/*
    //creating a tree
    root = buildTree(root);


    // level order 
    //data 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<"Printing the level order traversal o/p: "<<endl;
    levelOrderTraversal(root);


    cout<<" postorder traversal: ";
    postorder(root);

*/

    buildfromlevelorder(root);

    levelOrderTraversal(root);

    return 0;
}