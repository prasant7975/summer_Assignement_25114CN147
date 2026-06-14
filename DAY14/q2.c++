// a program to print Frequency of an element:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"------Enter the elements-------"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int num,freq=0;
    cout<<"Enter the element whose frequency to measure: ";
    cin>>num;
    for(int i=0;i<size;i++){
        if (arr[i]==num){
            freq++;
        }
    }
    cout<<"The frequency is: "<<freq;
    return 0;
}    