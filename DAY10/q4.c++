/*Write a program to Print character pyramid
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        //star print
        int breakpoint=(2*i+1)/2;
        char ch='A';
        for (int j=1;j<=2*i+1;j+=1){
            cout<<ch;
            if (j<=breakpoint)ch++;
            else ch--;
        }
        //space print
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}