#include<bits/stdc++.h>
using namespace std;

void mergearr(int marr[],int size){
    for(int i=0;i<size;i++){
        cout<<marr[i]<<" ";
    }
    cout<<endl;

    
}



int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int marr[n + m];
        for(int i = 0; i < n; i++){
        marr[i] = arr1[i];
    }
    
    for(int i=0;i<m;i++){
        marr[n + i] = arr2[i];
    }

    mergearr(marr, (n + m));



}