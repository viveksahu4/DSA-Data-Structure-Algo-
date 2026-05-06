#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>> target;
    for(int i=0;i<n - 1;i++){
        for(int j = n - 1;j>0;j--){
            if(arr[i] == arr[j]){
                continue;
            }

            if(arr[i] + arr[j] == target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}