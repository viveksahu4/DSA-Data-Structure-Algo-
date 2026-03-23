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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>i;
        s.push(i);
    }

    print(s);




}