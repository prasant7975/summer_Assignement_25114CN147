//to check wheter a pallindrome or not:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,rev=0,temp,rem;
    cout<<"Enter the number:";
    cin>>num;
    temp=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==temp){
        cout<<"Number is pallindrome"<<endl;
    }
    else{
        cout<<"Not a pallindrome"<<endl;
    }
    return 0;
}