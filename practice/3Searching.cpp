#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int search;
    cin>>search;
    int s = 0;
    int e = n - 1;
    while(s<=e){
        int mid = (s + e) / 2;
        if(arr[mid] == search){
            cout<<mid;
            break;
        }
        else if(arr[mid] < search){
            s = mid + 1;

        }
        else{
            e = mid - 1;
        }
    }
}