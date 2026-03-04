#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"sum of Column: "<<endl;
    int sum = 0;
    for(int i=1;i<= n;i++){
        for(int j=m;j>= 1;j--){
            // cout<<arr[i][j]<<" ";
            sum+=arr[j][i];
            
            
        }
        cout<<sum<<" ";
            
        sum=0;

    }
    
    
    
    
}