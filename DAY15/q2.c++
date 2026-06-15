// a program to Rotate array left:
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
    //rotation:
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    cout<<"------The array-------"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}