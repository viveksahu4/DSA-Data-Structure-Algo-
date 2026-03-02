#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=n;j++){
            int d  = a + 64;
            char ch = (char)d;
            cout<<ch<<" ";
            a++;
        }
        cout<<endl;
    }
}


// A B C D 
// A B C D
// A B C D
// A B C D














// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a = 1;
//         for(int j=1;j<=n;j++){
//             cout<<a + 64 <<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }



// 65 66 67 68 
// 65 66 67 68
// 65 66 67 68
// 65 66 67 68