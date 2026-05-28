//to count digits in a number:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0,n;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0){
        count+=1;
        n=n/10;
    }
    cout<<"The number of digits are:"<<count;
    return 0;

}