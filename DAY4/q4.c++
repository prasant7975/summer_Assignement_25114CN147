//to check armstrong number upto a range:
#include <bits/stdc++.h>
using namespace std;
int main() {
    int range;

    cout << "Enter the range: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
        int n = i;
        int temp = n;
        int count = 0;
        int arm = 0;
        while (n != 0) {
            count++;
            n /= 10;
        }
        while (temp != 0) {
            int digit = temp % 10;
            arm += round(pow(digit, count));
            temp /= 10;
        }

        if (arm == i) {
            cout << i << " ";
        }
    }

    return 0;
}