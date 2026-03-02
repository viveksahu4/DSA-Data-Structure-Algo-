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
    int arr[5] = {1,2,3,3,3};
    
    cout<<"first occurernce of 3 is at index : "<<firstlastocc(arr,5,3)<<endl;
    cout<<"last occurernce of 3 is at index : "<<lastlastocc(arr,5,3)<<endl;

    cout<<endl<<"total number of occ: "<<lastlastocc(arr,5,3) - firstlastocc(arr,5,3) + 1<<endl;

    return 0;

}