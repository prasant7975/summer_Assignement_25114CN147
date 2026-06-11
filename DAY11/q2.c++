// program to Write function to find maximum of two numbers:
#include <bits/stdc++.h>
using namespace std;
int Max(int a ,int b){
    int max=(a>b?a:b);
    return max;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>> a>>b;
    cout<<"The max is: "<<Max(a,b);
    return 0;

}
//find maximum of three numbers:
#include <bits/stdc++.h>
using namespace std;
int Max(int a ,int b,int c){
    int max=(a>b?a:b>c?b:c);
    return max;
}
int main(){
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>> a>>b>>c;
    cout<<"The max is: "<<Max(a,b,c);
    return 0;

}