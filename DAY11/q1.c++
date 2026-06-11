//program to Write function to find sum of two numbers:
#include <bits/stdc++.h>
using namespace std;
int Sum(float a ,float b){
    float x = a+b;
    return x;
}
int main(){
    float a,b;
    cout<<"Enter the two number: ";
    cin>> a>>b;
    cout<<"The sum is: "<<Sum(a,b);
    return 0;

}