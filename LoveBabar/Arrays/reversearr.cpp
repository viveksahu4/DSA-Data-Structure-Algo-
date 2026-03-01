#include<bits/stdc++.h>
using namespace std;


void reverseearr(int num[],int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        swap(num[start],num[end]);
        start++;
        end--;
    }

    
}

void printarr(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {12,23,32,63,96,100};

    reverseearr(arr,6);


    printarr(arr,6);

}