#include<bits/stdc++.h>
using namespace std;

bool  linearsearch(int num[],int size,int search){
    for(int i=0;i<size;i++){
        if(num[i] == search){
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lsearch;
    cin>>lsearch;

    bool found = linearsearch(arr,n,lsearch);
    if(found){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}