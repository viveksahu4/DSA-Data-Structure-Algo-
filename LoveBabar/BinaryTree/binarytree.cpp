
// creation / Build -> Binary tree 

#include<bits/stdc++.h>
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



int main(){
    node* root = NULL;

    //creating a tree
    root = buildTree(root);




    return 0;
}






    //             1
    //          /     \
    //        3         5
    //      /   \     /   \
    //     7     11  17   -1
    //    / \   / \  / \ 
    //  -1 -1 -1 -1 -1 -1










// Enter the data: 
// 1
// Enter data for inserting in left : 1
// Enter the data: 
// 3
// Enter data for inserting in left : 3
// Enter the data: 
// 7
// Enter data for inserting in left : 7
// Enter the data: 
// -1
// Enter data for inserting in right: 7
// Enter the data: 
// -1
// Enter data for inserting in right: 3
// Enter the data: 
// 11
// Enter data for inserting in left : 11
// Enter the data: 
// -1
// Enter data for inserting in right: 11
// Enter the data: 
// -1
// Enter data for inserting in right: 1
// Enter the data: 
// 5
// Enter data for inserting in left : 5
// Enter the data: 
// 17
// Enter data for inserting in left : 17
// Enter the data: 
// -1
// Enter data for inserting in right: 17
// Enter the data:
// -1
// Enter data for inserting in right: 5
// Enter the data:
// -1