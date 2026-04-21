//5. Insert at start






// //4. insert at specific pos.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter element of the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
    
//     int pos,value;
//     cin>>pos>>value;

//     for(int i=n;i>pos;i--){
//         arr[i] = arr[i - 1];
//     }
//     arr[pos] = value;
//     n++;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }


// }


// //3.Insert element at end 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter element of the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }

//     cout<<"Without Insert O/P: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;


//     int value;
//     cout<<"Enter element you want to insert: ";
//     cin>>value;
//     arr[n] = value;
//     n++;

//     cout<<endl;
//     cout<<"Final o/p with Insert: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }


//     return 0;


    
// }




// // 2. duplicate check
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {12,34,12,89};
//     bool check = true;
//     for(int i=0;i<arr.size();i++){
//         for(int j = arr.size() - 1;j>i;j--){
//             if(arr[j] == arr[i]){
//                 check  = false;
//                 break;

//             }
//         }
//     }
//     if(check){
//         cout<<"No duplicate";
//     }
//     else{
//         cout<<"duplicate";
//     }

//     return 0;
// }







// 1.// normal array operation 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<endl;
//     cout<<"Enter the element in the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Array result or you can say output: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int rightindex = s+count;
    swap(arr[rightindex],arr[pivot]);
    int s2 =s,e2=e;
    while(s2<rightindex && e2>rightindex){
        while()
    }
    return rightindex;

}
void q(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    q(arr,s,p-1);
    q(arr,p+1,e);

}
int main(){
    vector<int>arr = {5,4,3,2,1};
    int s=0,e=arr.size()-1;
    q(arr,s,e);
    for(auto &i: arr){
        cout<<i<<" ";
    }

}