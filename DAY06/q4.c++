//a program to Find x^n without pow()
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,r=1;
    cout<<"Enter the Number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    while(b!=0){
        r*=a;
        b-=1;
    }
    cout<<"Result: "<<r<<endl;
    return 0;
}
