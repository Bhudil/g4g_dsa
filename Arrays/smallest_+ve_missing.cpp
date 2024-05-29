#include <iostream>
#include <unordered_set>
using namespace std;

int findMissingNumber(int arr[], int n) {
    unordered_set<int> seen;

    // Mark positive numbers in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            seen.insert(arr[i]);
        }
    }

    // Find the smallest positive missing number
    for (int i = 1; i <= n + 1; i++) {
        if (seen.find(i) == seen.end()) {
            return i;
        }
    }

    return -1; // In case all positive numbers are present
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);
    cout << "Smallest positive missing number is: " << missingNumber << endl;

    return 0;
}
