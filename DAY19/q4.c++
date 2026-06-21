//a program to Find diagonal sum
#include <iostream>
using namespace std;

int main() {
    int a[100][100], r, c;
    int sum = 0;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "------Diagonal Sum------\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(i == j) {
                sum += a[i][j];
            }
        }
    }
    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}