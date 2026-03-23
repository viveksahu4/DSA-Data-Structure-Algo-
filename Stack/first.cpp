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