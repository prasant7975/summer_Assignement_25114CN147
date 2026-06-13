// a program to Find sum and average of array:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],size,sum=0;
    float avg;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"------Enter the elements-------"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum+=arr[i];
        avg=(float)sum/size;
    }
    cout<<"The sum of the array: "<<sum<<endl;
    cout<<"The average of array: "<<avg<<endl;
    return 0;
}