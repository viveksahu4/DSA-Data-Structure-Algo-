#include<bits/stdc++.h>
using namespace std;
int main(){
    // int year = 2004;
    // if(year % 400 == 0 && year % 100 != 0 || year % 4 ==0){
    //     cout<<"leaf year";
    // }
    // else{
    // cout<<"Not a leaf year ";
    // }
    int n;
    cin>>n;
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    for(int i=0;i<n;i++){
        if(arr[i] % 400 == 0 && arr[i] % 100 != 0 || arr[i] % 4 ==0){
        cout<<""<<arr[i]<<" ";
    }
    else{
    cout<<""<<arr[i]<<" ";
    }
    }

    
}