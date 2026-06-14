//Write a program to Check Armstrong number:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0, num, temp, temp2, a = 0, r;

    cout << "Enter the number: ";
    cin >> num;

    temp = num;
    while (num != 0) {
        count++;
        num /= 10;
    }

    temp2 = temp;
    while (temp != 0) {
        r = temp % 10;
        a += round(pow(r, count));
        temp /= 10;
    }

    if (a == temp2) {
        cout << "Armstrong number\n";
    } else {
        cout << "Not an Armstrong number\n";
    }

    return 0;
}