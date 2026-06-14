#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,lcm;
    cout<<"Enter the numnber n1:";
    cin>>n1;
    cout<<"Enter the number n2:";
    cin>>n2;
    int a=n1;
    int b=n2;
    while(n2!=0){
        int temp=n2;
        n2= n1%n2;
        n1=temp;
    }
    lcm = (a/n1)*b;

    cout << "The LCM is: " << lcm << endl;
    return 0;
}