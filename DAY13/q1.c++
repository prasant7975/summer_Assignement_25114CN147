//program to Input and display array:
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
    cout<<"------The array-------"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}