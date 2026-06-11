//program to Write function to find factorial:
#include <bits/stdc++.h>
using namespace std;
void Fact(int n ){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<"The factorial is: "<<f;
}
int main(){
    int a,b;
    cout<<"Enter the number: ";
    cin>> a;
    Fact(a);
    return 0;

}