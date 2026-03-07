#include<bits/stdc++.h>
using namespace std;

int getMax(int num[],int n){
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i] > max){
            max2 = max;
            max = num[i];
        }
    }

    return max2;
}


int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"maximum number in array is:"<<getMax(num,size);
    

    return 0;
}