#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& s,int x){
    //base case 
    if(s.empty()){
        s.push(x);
        return;

    }
    int num = s.top();
    s.pop();

    //recurive call
    solve(s,x);
    s.push(num);
}
stack<int> pushatbottom(stack<int>& s,int x){
    solve(s,x);
    return s;
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    int x = 100;
    s  = pushatbottom(s,x);


    cout << "Stack after inserting at bottom:\n";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}