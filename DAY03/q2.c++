//to Print prime numbers in a range
#include <bits/stdc++.h>
using namespace std;
int main(){
    int flag,n;
    cout<<"Enter the number(upto which prime number to print):";
    cin>>n;
    for(int i=2;i<=n;i++){
        flag=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }    
        if(flag==0){
            cout<<i<<endl;
        }
                

        
    }
    return 0;
}