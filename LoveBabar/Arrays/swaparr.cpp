#include<bits/stdc++.h>
using namespace std;

void printarr(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
}
void swapfunction(int num[],int size){
    for(int i=0;i<size;i+=2){
        if(i + 1 < size){
            swap(num[i], num[i + 1]);
        }
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int arr1[8] = {12,13,14,15,16,17,18,19};

    swapfunction(arr,5);
    swapfunction(arr1,8);
    cout<<endl;
        printarr(arr,5);
    cout<<endl;
        printarr(arr1,8);
    
    return 0;
}