// program to Recursive sum of digits
#include <bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10 + digit_sum(n/10);
    }
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>> num;
    cout<<"The sum of the digits: "<<digit_sum(num);
    return 0;
}