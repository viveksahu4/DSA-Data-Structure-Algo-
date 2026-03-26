//Reverse a string using stack 
// A B C D E 
// E D C B A

#include<bits/stdc++.h>
using namespace std;
class stringreverse{
    public:


};

int main(){
    string str = "vivek";

    stack<char> s;
    // s.push('L');
    // s.push('o');
    // s.push('v');
    // s.push('e');
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);

    }
    string ans = "";

    while(!s.empty()){
    char ch  = s.top();
    ans.push_back(ch);

    s.pop();
    }


    cout<<ans<<endl;
    return 0;
}