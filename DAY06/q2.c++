//program to Convert decimal to binary
#include <bits/stdc++.h>
using namespace std;
int main(){
    long binary;
    int decimal=0 ,base=1,remainder;
    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}