//Write a program to Print factors of a number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}