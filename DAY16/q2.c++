#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int,int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElem = arr[0];

    for(auto pair : freq){
        if(pair.second > maxFreq){
            maxFreq = pair.second;
            maxElem = pair.first;
        }
    }

    cout << "Element with maximum frequency: " << maxElem << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}