#include<bits/stdc++.h>
using namespace std;

void sortarr(int num[],int size){
    int left = 0;
    int right = size - 1;

    while(left < right){
        if(num[left] == 0){
            left++;
        }
        else if(num[right] == 1){
            right--;
        }
        else{
            swap(num[left],num[right]);
            left++;
            right--;
        }
    }
    
}


void print(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }

}

int main(){
    int arr[6] = {0,1,0,1,1,0};

    sortarr(arr,6);
    print(arr,6);
    return 0;
}