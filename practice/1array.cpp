// normal array operation 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array result or you can say output: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
