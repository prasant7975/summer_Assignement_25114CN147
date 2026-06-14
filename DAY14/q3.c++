//program to  find Second largest element:
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
    int sec_largest=-1;
     for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest && arr[i] != largest) {
            sec_largest = arr[i];
        }
    }

    if(sec_largest == -1)
        cout << "Second largest element does not exist.";
    else
        cout << "Second largest element = " << sec_largest;

    return 0;
}