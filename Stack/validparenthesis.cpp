#include<bits/stdc++.h>
using namespace std;



bool isvalidparenthesis(string expression){
    stack<char>s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];
        // if opening blacket  so push in the stack 
        // if closing blacket so check stacktop and pop 
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }
        else{
            // for closing blacket 
            if(!s.empty()){
            char top = s.top();

            if((ch == ')' && top == '(' ) ||
                (ch == ']' && top == '[' ) ||
                (ch == '}' && top == '{' )){
                s.pop();
            }
            else{
                return false;
            }

            }
            else{
                // cout<<"unblanaced"<<endl;
                return false;
            }

        }

    }

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    string expression;
    cout<<"Enter expression: ";
    cin>>expression;

    if(isvalidparenthesis(expression)){
        cout<<"balanced parenthesis"<<endl;
    }
    else{
        cout<<"Not balanced parenthesis"<<endl;
    }

}