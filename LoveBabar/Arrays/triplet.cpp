#include<bits/stdc++.h>
using namespace std;
void triplet(int num[],int size,int p){
    bool found = false;

    for(int i=0;i<size;i++){
        for(int j = i + 1;j<size;j++){
            for(int k = j + 1;j<size;j++){
                if(num[i] + num[j] + num[k] == p){
                    cout<< num[i] << " "<< num [j]<<" "<<num[k]<<endl;
                    found = true;
                    break;
                }
            }
        }
    }

    if(!found){
        cout<<-1;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    // int p = 12;

    triplet(arr,5,12);

}