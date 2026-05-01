#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q; // creating queue with the help of these queue<int> q and name of queue is q and also remainder queue is integer type because show and mention the queue datatype <int> 
    q.push(11);
    cout<<"Front of queue is: "<<q.front()<<endl;
    
    q.push(19);
    q.push(78);
    cout<<"Size of Queue: "<<q.size()<<endl;
    q.pop();
    cout<<"Size of Queue: "<<q.size()<<endl;
    // q.pop();
    // q.pop();

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }


    


    return 0;
}