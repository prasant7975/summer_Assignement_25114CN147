//program to Write function for Armstrong:
#include <bits/stdc++.h>
using namespace std;
void Arms(int n ){
    int r,rev=0,count=0;
    int temp=n;
    int temp1=temp;
    while(n!=0){
        count++;
        n=n/10;
    }
    while(temp!=0){
        r=temp%10;
        rev=rev+round(pow(r,count));
        temp=temp/10;
    }
    if(rev==temp1){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Number is not a Armstrong";
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Arms(num);
    return 0;
    
}
