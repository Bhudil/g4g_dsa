#include <iostream>
#include <algorithm>
using namespace std;

double medianof2(int arr[], int brr[], int n, int m) {
    int temp[n + m];

    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    for (int j = 0; j < m; j++) {
        temp[n + j] = brr[j];
    }

    sort(temp, temp + n + m);

    int mid = (n + m) / 2;
    if ((n + m) % 2 == 1) {
        return temp[mid];
    } else {
        return (temp[mid - 1] + temp[mid]) / 2.0;
    }
}

int main() {
    int n, m;
    cout << "Enter the size of the first array (n): ";
    cin >> n;
    cout << "Enter the size of the second array (m): ";
    cin >> m;

    int arr[n], brr[m];

    cout << "Enter the elements of the first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the elements of the second array:\n";
    for (int j = 0; j < m; j++) {
        cin >> brr[j];
    }

    double median = medianof2(arr, brr, n, m);
    cout << "The median of the merged sorted arrays is: " << median << endl;

    return 0;
}
