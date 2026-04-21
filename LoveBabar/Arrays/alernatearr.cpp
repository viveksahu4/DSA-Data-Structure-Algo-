#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr1[3] = {1,3,5};
    // int arr2[3] = {2,4,6};
    // for(int i=0;i<3;i++){
        
    //         cout<<arr1[i]<<" "<<arr2[i]<<" ";
        
    //     cout<<endl;
    // }


    int n,m;
    cin>>n;
    cin>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
 int i = 0;
    while(i <n && i < m){
        cout<<arr1[i]<<" "<<arr2[i];
        i++;
    }


    
    return 0;
}