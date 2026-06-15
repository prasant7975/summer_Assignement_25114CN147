// a program to Reverse array:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"------Enter the elements-------"<<endl;
    for(int i=1;i<=size;i++){
        cin>>arr[i];
    }
    //reversing the array:
    cout<<"------The reverse:----------"<<endl;
    for(int i=size;i>0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}