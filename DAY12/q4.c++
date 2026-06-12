// program to Write function for perfect number:
#include <bits/stdc++.h>
using namespace std;

void p_num(int n ){
    int s=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a perfect number";
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    p_num(num);
    return 0;
    
}