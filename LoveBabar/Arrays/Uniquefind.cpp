#include<bits/stdc++.h>
using namespace std;

void printarr(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
}

int FindUnique(int num[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^num[i]; // XOR properity
    }
    return ans;

}


int main(){
    int arr[5] = {3,2,3,2,5};
    
    int unique = FindUnique(arr,5);
    cout<<"Unique element is: "<<unique<<" ";

    return 0;
}