#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int pos;
    cin>>pos;
    int value;
    cin>>value;

    for(int i=n;i>pos;i--){
        arr[i] = arr[i -1];
    }
    arr[pos] = value;
    n++;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}