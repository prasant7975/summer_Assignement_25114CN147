//Write a program to Write function for Fibonacci:
//program to Write function for Armstrong:
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    int a =0,b=1;
    if(n<1){
        cout<<"Fibonacci not possible";
    }
    if(n==1){
        cout<<a;
    }
    if(n==2){
        cout<<a<<" "<<b;
    }else{
        cout<<a<<" "<<b<<" ";
        for(int i=0;i<n-2;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    }
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    fibo(num);
    return 0;
    
}