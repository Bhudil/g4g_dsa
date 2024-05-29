#include <iostream>
using namespace std;

void rearrangeArray(int arr[], int n) {
    int maxIdx = n - 1, minIdx = 0;
    int maxElem = arr[n - 1] + 1; // Store a value greater than the maximum element

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] = arr[maxIdx] % maxElem * maxElem + arr[i];
            maxIdx--;
        } else {
            arr[i] = arr[minIdx] % maxElem * maxElem + arr[i];
            minIdx++;
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / maxElem;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrangeArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
