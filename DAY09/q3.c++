/*Write a program to Print repeated character pattern
A
BB
CCC
DDDD 
EEEEE
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(char ch= 'A';ch<='A'+n -1;ch++){
        for(int j=1;j<=ch-'A'+1;j++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
    return 0;
}