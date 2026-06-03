//program to Find GCD of two number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the numnber n1 :";
    cin>>n1;
    cout<<"Enter the number n2 :";
    cin>>n2;
    while(n2!=0){
        int temp=n2;
        n2= n1%n2;
        n1=temp;
    }
    cout<<"The GCD is :"<< n1<<endl;
    return 0;
}