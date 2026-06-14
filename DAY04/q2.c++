// program to Find nth Fibonacci term :
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the nth term:";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    int a = 0, b = 1;

    if (n == 1) cout << a;
    else if (n == 2) cout << b;
    else {
        for (int i = 3; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        cout << b;
    }

    return 0;
}