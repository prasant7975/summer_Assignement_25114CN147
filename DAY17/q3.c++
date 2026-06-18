//a program to Intersection of arrays
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
    
    cout << "------Intersection Array-------" << endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(a1[i] == a2[j]) {
                cout << a1[i] << " ";
                break;
            }
        }
    }
    
    return 0;
}