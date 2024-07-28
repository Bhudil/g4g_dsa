#include <iostream>
#include <algorithm>

using namespace std;

int findNumberOfTriangles(int arr[], int n) {
    sort(arr, arr + n);
    int count = 0;

    for (int k = n - 1; k >= 2; --k) {
        int i = 0;
        int j = k - 1;

        while (i < j) {
            if (arr[i] + arr[j] > arr[k]) {
                count += (j - i);
                j--;
            } else {
                i++;
            }
        }
    }

    return count;
}

int main() {
    int arr1[] = {3, 5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Output for arr1: " << findNumberOfTriangles(arr1, n1) << endl;

    int arr2[] = {6, 4, 9, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Output for arr2: " << findNumberOfTriangles(arr2, n2) << endl;

    return 0;
}