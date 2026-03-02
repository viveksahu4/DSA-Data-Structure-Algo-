#include<bits/stdc++.h>
using namespace std;
int firstlastocc(int num[],int size,int occ){
     int start  = 0;
     int end = size - 1;
     int ans  = -1;
     while(start <= end){
        int mid = start + (end - start) / 2;
        if(num[mid] == occ){
            ans = mid;
            end = mid - 1;
        }
        else if(num[mid] > occ){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
     }
    
    return ans;
}

int lastlastocc(int num[],int size,int occ){
     int start  = 0;
     int end = size - 1;
     int ans  = -1;
     while(start <= end){
        int mid = start + (end - start) / 2;
        if(num[mid] == occ){
            ans = mid;
            start = mid + 1;
        }
        else if(num[mid] > occ){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
     }
    
    return ans;
}




int main(){
    int arr[5] = {1,2,3,2,2};
    unordered_map<int,int> um;
    for(int i=0;i<5;i++){
        int a = arr[i];
        um[a]++;
    }
    for(auto &i: um){
        cout<<i.first <<" -> "<< i.second;
        cout<<endl;

    }



    return 0;

}