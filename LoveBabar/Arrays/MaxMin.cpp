#include<bits/stdc++.h>
using namespace std;

int getMax(int num[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){

        maxi  = max(maxi,num[i]);
        // if(num[i] > max){
        //     max = num[i];
        // }
    }

    return maxi;
}

int getMin(int num[],int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        mini = min(mini,num[i]);
        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    return mini;
}


int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"maximum number in array is:"<<getMax(num,size);
    cout<<endl<<"minimum number in array is: "<<getMin(num,size);

    return 0;
}










