#include<iostream>
using namespace std;
int main(){
    int n;  // this line create integer variable name is n
    cin>>n; //take user input 
    int arr[n];  //create array name is arr name size is n size that create before this
    for(int i=0;i<n;i++){    // this is take user input array  0 to n size
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){    // this is print or o/p which array you take this give return in form of o/p 
        cout<<arr[i]<<" ";
    }
}

