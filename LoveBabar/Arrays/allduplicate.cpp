#include<bits/stdc++.h>
using namespace std;
void duplicate(int arr[],int size){
    bool found = false;
    for(int i=0;i<size;i++){
        for(int j = i + 1;j<size;j++){
            if(arr[i] == arr[j]){
                cout<< arr[j]<<" ";
                found = true;
                // return;
            }
        }
    }

    if(!found){
        cout<<"No";
    }
}


int main(){
    int arr[5] = {1,3,3,4,4};
    duplicate(arr,5);

    return 0;
}