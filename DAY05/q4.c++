//program to Find largest prime;
#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    long long largest = -1;
    while (num % 2 == 0) {
        largest = 2;
        num /= 2;
    }
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest = i;
            num /= i;
        }
    }
    if (num > 2) {
        largest = num;
    }

    cout << "Largest prime factor = " << largest;

    return 0;
}