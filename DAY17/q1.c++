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
    
   
    int merged[200];
    
    
    for(int i = 0; i < size; i++) {
        merged[i] = a1[i];
    }
    
    
    for(int i = 0; i < size; i++) {
        merged[size + i] = a2[i];
    }
    
 
    cout << "------Merged Array-------" << endl;
    for(int i = 0; i < (2 * size); i++) {
        cout << merged[i] << " ";
    }
    
    return 0;
}