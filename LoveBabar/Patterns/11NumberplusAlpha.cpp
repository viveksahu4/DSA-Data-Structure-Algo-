#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j = 1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            int d = j + 64;
            if(i % 2 == 0){
                char ch = (char)d;
                cout<<ch<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}