// program to Count even and odd elements:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],size,count_even=0,count_odd=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"------Enter the elements-------"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout<<"The no of even elements: "<<count_even<<endl;
    cout<<"The no of odd elements: "<<count_odd<<endl;
    return 0;

}