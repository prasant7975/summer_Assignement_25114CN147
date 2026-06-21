//a program to Transpose matrix
#include <iostream>
using namespace std;
int main() {
    int a[100][100], r, c;
    
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "------Transpose of the matrix------\n";
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}