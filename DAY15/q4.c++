//a program to Move zeroes to end
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[100], size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "------Enter the elements-------" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int nonZeroIndex = 0; 

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
    cout << "------The array-------" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}