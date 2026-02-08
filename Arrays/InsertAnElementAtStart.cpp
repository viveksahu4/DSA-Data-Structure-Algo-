#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0 ; i<n;i++){
        cin>>arr[i];

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int value ;
    cin>>value;
    for(int i=n;i>0;i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = value;
    n++;

    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}