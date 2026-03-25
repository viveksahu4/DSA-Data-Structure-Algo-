//Reverse a string using stack 
// A B C D E 
// E D C B A

#include<bits/stdc++.h>
using namespace std;
// class stringreverse{
//     public:


// };

int main(){

    stack<char> s;
    s.push('L');
    s.push('o');
    s.push('v');
    s.push('e');

    while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
    }
    return 0;
}