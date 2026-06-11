// a program to Write function to check prime:
#include <bits/stdc++.h>
using namespace std;

void check_prime(int a) {
    if (a <= 1) {
        cout << "Not Prime";
        return;
    }

    int flag = 0;

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Prime";
    else
        cout << "Not Prime";
}

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    check_prime(a);

    return 0;
}