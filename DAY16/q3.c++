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

    int target;
    cout << "Enter the target sum: ";
    cin >> target;


    set<int> seen;
    bool found = false;

    for(int i = 0; i < n; i++){
        int needed = target - arr[i];
        if(seen.count(needed)){
            cout << "Pair found: (" << needed << ", " << arr[i] << ")" << endl;
            found = true;
        }
        seen.insert(arr[i]);
    }

    if(!found){
        cout << "No pair found with sum " << target << endl;
    }

    return 0;
}