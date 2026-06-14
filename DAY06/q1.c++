//Write a program to Convert decimal to binary
#include <bits/stdc++.h>
using namespace std;
int main(){
    int decimalNum;
    cout<< "Eneter the Decimal number: ";
    cin>>decimalNum;
    if(decimalNum==0){
        cout<< "Binary Tranformation: 0";
        return 0;
    }
    string binary="";
    while(decimalNum!=0){
        binary=binary+char((decimalNum %2)+ '0');
        decimalNum/=2;
    }
    cout<< "The Binary Transformation: "<< binary<<endl;
    return 0;
}