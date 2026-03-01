#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printing the array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    //declare 
    int number[15];
    // cout<<"value of 0 index "<<number[0]<<endl; // 0

    int second[3] = {5,7,13};
    printarray(second,3);

    int sizesecond = sizeof(second)/sizeof(int); //40/4=10
    cout<<endl<<sizesecond;  // 12/4 = 3
    

    // cout<<second[2]<<endl;
    // cout<<"everything is fine"<<endl;
    return 0;
}