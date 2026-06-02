//to find the preoduct of the digits:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,p=1,rem;
    cout<<"Enter the number:";
    cin>>num;
    while(num!=0){
        rem=num % 10;
        p*=rem;
        num/=10;
    }
    cout<<"The product of the digits is:"<<p<<endl;
    return 0;
}