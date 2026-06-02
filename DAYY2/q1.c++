//to find sum of the digits
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,s=0,r;
    cout<<"Enter the number:";
    cin>>num;
    while(num!=0){
        r=num%10;
        s+=r;
        num=num/10;
    }
cout<<"The sum of the digits is:"<<s<<endl;
return 0;
}