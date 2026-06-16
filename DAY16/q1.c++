// C++ program to find the missing number in an array
#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr, int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : arr) {
        actualSum += num;
    }

    return expectedSum - actualSum;
}

int main() {
    vector<int> arr = {1, 2, 3, 5};
    int n = 5;

    cout << "Missing number: " << findMissing(arr, n) << endl;
    return 0;
}