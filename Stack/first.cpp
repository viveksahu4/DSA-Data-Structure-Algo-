// stack based on LIFO Last In First Out and real life example like mess me plate or shadi me plates stack and coins of stacks
// Here insert operation equal to push operation
//Here remove or delete operation equal to pop operation so remove means pop firstly last element of the stack that push in the last that based on LIFO last in first out 
//Here peek operation is equal to top operation means it give me top element present in the stack 
// Also isempty for check stack are empty or not 
// also check size for size 

#include<bits/stdc++.h>
using namespace std;
void print(stack<int>s){
    while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    print(s);

}