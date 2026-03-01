//1,2,3,4,5
//s = 5 
// pair aane chaiye 1 4 and 2 3 

#include<bits/stdc++.h>
using namespace std;

void  sumpair(int arr[],int size,int s){
    bool found = false;
    for(int i=0;i<size;i++){
        for(int j = i + 1;j<size;j++){
            if(arr[i] + arr[j] == s){
                cout<<arr[i]<<" "<< arr[j]<<endl;
                found  = true;
            }
        }
    }

    if(!found){
        cout<< -1;
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int a = 5;
  sumpair(arr,7,a);

    return 0;
}