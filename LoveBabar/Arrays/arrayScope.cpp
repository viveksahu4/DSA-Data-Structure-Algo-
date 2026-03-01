#include<bits/stdc++.h>
using namespace std;
void printarr(int num[],int size){
    num[0] = 120;
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
}

int main(){
    int arr[3] = {12,43,67};

    printarr(arr,3);
}