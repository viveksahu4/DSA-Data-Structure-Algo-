#include<bits/stdc++.h>
using namespace std;

void  getMax(int num[],int n){
    int max = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i] > max  ){
            max3 = max2;
            max2 = max;
            max = num[i];
            
        }
        if(num[i] < max && num[i] > max2){
            max3 = max2;
            max2 = num[i];
            
        }
        if(num[i]< max2 && num[i] > max3){
            max3 = num[i];
        }
    }
    cout<<max<<" "<<max2<<" "<<max3<<endl;
    return;
}


int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    getMax(num,size);
    

    return 0;
}