// a program to Find largest and smallest element:
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
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
        else if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    cout<<"The smallest element is: "<<smallest<<endl;
    cout<<"the largest element is: "<<largest<<endl;
    return 0;
}