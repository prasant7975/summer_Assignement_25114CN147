// a program to Find duplicates in array:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], size, dup_arr[100];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "------Enter the elements-------" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for(int i = 0; i < size; i++) {

        // Check if already stored in dup_arr
        bool alreadyStored = false;
        for(int k = 0; k < count; k++) {
            if(dup_arr[k] == arr[i]) {
                alreadyStored = true;
                break;
            }
        }

        if(alreadyStored)
            continue;

        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                dup_arr[count++] = arr[i];
                break;
            }
        }
    }

    cout << "The duplicates are: ";
    for(int i = 0; i < count; i++) {
        cout << dup_arr[i] << " ";
    }

    return 0;
}