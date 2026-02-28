#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {5,67,34,2,10};
    int k = INT_MIN;
    int maxi = 0;
    for(int i=0;i<5;i++){
        if(arr[i] > k){
            maxi = arr[i];
            k = maxi;

        }
    }
    cout<<maxi;
}