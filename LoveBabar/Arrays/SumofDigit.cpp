#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int temp = 1239;
    int sum = 0;
    while(temp != 0){
        int r = temp % 10;
        temp /=10;
        sum += r;


    }
    cout<<"Summmof digit: "<<sum;
}