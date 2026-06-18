//a program to Union of arrays
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
    
    cout << "------Union Array-------" << endl;
    for(int i = 0; i < size; i++) {
        cout << a1[i] << " ";
    }
    
    for(int i = 0; i < size; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < size; j++) {
            if(a2[i] == a1[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            cout << a2[i] << " ";
        }
    }
    
    return 0;
}