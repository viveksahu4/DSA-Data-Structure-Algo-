// #include<bits/stdc++.h>
// using namespace std;
// bool palindroum(int n){
//     int temp = n;
//     int sum = 0;
//     while(temp != 0){
//         int r = temp % 10;
//         temp /=10;
//         sum = sum * 10 + r;


//     }

//     if(sum == n){
//         return true;
//     }
//     return false;
    
// }
// int main(){
//     int a = 1221;
//     cout<<(palindroum(a)?"Yes":"No");


// }














#include<bits/stdc++.h>
using namespace std;
bool palindroum(int n){
    int temp = n;
    int sum = 0;
    while(temp != 0){
        int r = temp % 10;
        temp /=10;
        sum = sum * 10 + r;


    }

    if(sum == n){
        return true;
    }
    return false;


    
    
}




int main(){
    // int a = 1221;
    // cout<<(palindroum(a)?"Yes":"No");


    int p[5] = {121,2892,333,555,1111};
    for(int i=0;i<5;i++){
        if(palindroum(p[i])){
            cout<<p[i]<<" ";
        }

    }



}














