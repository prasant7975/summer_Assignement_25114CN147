//program to Generate Fibonacci series:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a =0,b=1;
    cout<<"Enter the n:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;

}