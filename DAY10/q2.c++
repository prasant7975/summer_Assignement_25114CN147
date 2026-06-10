/*Write a program to Print reverse pyramid.
*********
 *******
  *****
   ***
    *
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=n;i>0;i--){
        //space 
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        //star print
        for (int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        //space print
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}