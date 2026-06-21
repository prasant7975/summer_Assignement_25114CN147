//a program to Subtract matrices
#include <iostream>
using namespace std;

int main() {
    int a1[100][100],r1,c1,a2[100][100],r2,c2;
    cout<< "------Array1------";
    cout << "Enter no of rows and colums: ";
    cin >> r1>>c1;

    cout << "Enter elements:\n";
    for(int i = 0; i < r1; i++) {
        for(int j=0;j<c1;j++){
            cin >> a1[i][j];
        }
        
    }
    cout<< "------Array2------";
    cout << "Enter no of rows and colums: ";
    cin >> r2>>c2;

    cout << "Enter elements:\n";
    for(int i = 0; i < r2; i++) {
        for(int j=0;j<c2;j++){
            cin >> a2[i][j];
        }
    }
    //subtracting two matrices
    if(r1==r2 && c1==c2){
        int diff[100][100];
        for(int i = 0; i < r1; i++) {
            for(int j=0;j<c1;j++){
                diff[i][j]=a1[i][j]-a2[i][j];
            }
        }
        cout<< "------Difference of two matrices------\n";
        for(int i = 0; i < r1; i++) {
            for(int j=0;j<c1;j++){
                cout << diff[i][j] << " ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Subtraction not possible\n";
    }
    return 0;
}