#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& s, int k){
    // Base case: middle element
    if(k == 1){
        s.pop();  // delete middle
        return;
    }

    int temp = s.top();
    s.pop();

    solve(s, k - 1);

    s.push(temp);  // push back
}

void deleteMiddle(stack<int>& s, int n){
    int k = (n / 2) + 1;
    solve(s, k);
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
int n = s.size();
deleteMiddle(s, n);

while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}