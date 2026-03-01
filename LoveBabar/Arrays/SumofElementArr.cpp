#include<bits/stdc++.h>
using namespace std;

int arrsum(int num[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=num[i];
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<arrsum(arr,n);
    return 0;
}