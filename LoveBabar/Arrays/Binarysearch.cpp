#include<bits/stdc++.h>
using namespace std;

void binarysearch(int num[],int size,int key){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(num[mid] == key ){
            cout<<"element found: "<<mid<<endl;
            return;
        }
        else if(num[mid] < key ){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
    cout<<"element not found";
}

void print(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
}

int main(){

    int arr[5] = {1,2,3,45,6};
    binarysearch(arr,5,3);
    return 0;
}