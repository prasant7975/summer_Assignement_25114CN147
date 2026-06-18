//a program to Find common elements
#include <iostream>
using namespace std;

int main() {
    int a1[100], a2[100], size = 5;
    
    cout << "------Enter the elements (in arr1)-------" << endl;
    for(int i = 0; i < size; i++) {
        cin >> a1[i];
    }
    
    cout << "------Enter the elements (in arr2)-------" << endl;
    for(int i = 0; i < size; i++) {
        cin >> a2[i];
    }
    
    cout << "------Common Elements-------" << endl;
    for(int i = 0; i < size; i++) {
        bool found = false;
        for(int j = 0; j < size; j++) {
            if(a1[i] == a2[j]) {
                found = true;
                break;
            }
        }
        if(found) {
            cout << a1[i] << " ";
        }
    }
    
    return 0;
}