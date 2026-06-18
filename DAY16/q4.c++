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
    set<int> seen;
    vector<int> result;

    for(int i = 0; i < n; i++){
        if(seen.find(arr[i]) == seen.end()){
            result.push_back(arr[i]);
            seen.insert(arr[i]);
        }
    }

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}