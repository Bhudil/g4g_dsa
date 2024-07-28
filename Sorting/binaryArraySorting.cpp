#include <bits/stdc++.h>
using namespace std;

void binSort(int A[], int N)
{
    int i = 0, j = N - 1;
    do {
        while (A[i] == 0) {
            i++;
        }
        while (A[j] == 1) {
            j--;
        }
        if (i < j) {
            swap(A[i], A[j]);
        }
    } while (i < j);
}


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    binSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
