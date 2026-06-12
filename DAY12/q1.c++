//program to Write function for palindrome:
// a program to Write function to check prime:
#include <bits/stdc++.h>
using namespace std;
void Palin(int n ){
    int r,rev=0;
    int temp=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp){
        cout<<"Number is pallindrome";
    }
    else{
        cout<<"Number is not a pallindrome";
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Palin(num);
    return 0;
    
}