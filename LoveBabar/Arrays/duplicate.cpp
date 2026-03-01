#include<bits/stdc++.h>
using namespace std;


int findduplicate(vector<int> &arr){
    int ans = 0;
     // XOR all elements of array
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }

    // XOR numbers from 1 to n-1
    for(int i=1;i<arr.size();i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    vector<int>arr = {1,2,3,4,2};
    int duplicate = findduplicate(arr);
    cout<<"duplicate element is: "<<duplicate<<endl;



    




    return 0;
}