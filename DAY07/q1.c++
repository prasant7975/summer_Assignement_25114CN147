//Write a program to Recursive factorial
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int x=fact(num);
    cout<<"Factorial: "<<x;
    return 0;
}