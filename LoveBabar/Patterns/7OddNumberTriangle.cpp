#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<= (2 * n - 1);i+=2){
        for(int j=1;j<=i;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



// 1 
// 1 3
// 1 3 5
// 1 3 5 7











// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(2 * n - 1);j+=2){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }




// 1 3 5 7 
// 1 3 5 7
// 1 3 5 7
// 1 3 5 7