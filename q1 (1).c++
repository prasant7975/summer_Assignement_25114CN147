//to calculate sum of first N numnbers
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cout<<"Enter N:";
    cin>> n;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    cout<<"The sum is:"<<s<<endl;
    return 0;
}