// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr(5); //= {12,32,45,454,76}; //delcaration of vector
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<< " ";
//     }

// }

















// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     vector<int> arr = {12,43,65,87,90};
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     arr.push_back(48);
//     cout<<endl;
    
//     arr[0]= 7896;
    
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }













#include<bits/stdc++.h>
using namespace std;
int main(){
    bool check = true;
    vector<int> arr = {12,13,18,87,125};
    for(int i=0;i<arr.size();i++){
        for(int j=arr.size() - 1;j>i;j--){
            if(arr[j] == arr[i]){
                check = false;
                break;
            }
        }
    }
    cout<< check;
    
}