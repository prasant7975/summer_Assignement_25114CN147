//Write a program to Recursive Fibonacci
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if (n==1){
        return 0 ;
    }
    else if (n==2){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>> num;
    for (int i=1;i<=num;i++){
        int x=fibo(i);
        cout<<x<<" ";
    }
    return 0;
}