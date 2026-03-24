#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class mstack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    //beehaviour 
    mstack(int size){
        this->size = size;
        arr = new int[size]; // create arr dynamically
        top  = -1;


    }

    void push(int element){
        if(top < size - 1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack overflow"<<endl;
        }

    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }

    int peek(){
        if(top >= 0){
        return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }

    }

    bool isempty(){
        if(top == -1){
            return true;

        }
        else{
            return false;
        }

    }


    

};
int main(){
    mstack st(5);
    st.push(22);
    st.push(98);
    st.push(89);
    st.push(66);
    st.push(77);

     
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();



    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;
}