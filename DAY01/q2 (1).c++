//to print the multiplication table of a program
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout <<"Enter the number:";
    cin>> n;
    for (int i=1;i<=10;i++){
        m=n*i;
        cout<<m<<endl;
    }
    return 0;
}