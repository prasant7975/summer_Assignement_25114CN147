//A program to Linear search:
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
    //performing linear search:
    int num,post=0;
    cout<<"Enter the number to be searched: ";
    cin>>num;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            post=i+1;
        }
    }
    if(post!=0){
        cout<<"The Number is present at "<<post<<" position"<<endl;
    }
    else{
        cout<<"Number not present"<<endl;
    }
    return 0;


}