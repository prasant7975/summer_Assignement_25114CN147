#include <bits/stdc++.h>
using namespace std;

int rev = 0;

int rev_num(int n) {
    if (n == 0) {
        return rev;
    }

    rev = rev * 10 + (n % 10);
    return rev_num(n / 10);
}

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    cout << "The Reverse: " << rev_num(num);
    return 0;
}