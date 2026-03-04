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

    cout<<"sum of rows: "<<endl;
    int sum = 0;
    for(int i=1;i<= n;i++){
        for(int j=1;j<= m;j++){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
            
            
            
        }
        cout<<endl;
    cout<<sum<<endl;
    sum=0;
    }
    
    
    
    
}