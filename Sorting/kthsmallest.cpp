#include <bits/stdc++.h>
using namespace std;

//int kth(int arr[],int n,int k){
//    sort(arr,arr+n);
//    return arr[k-1];
//}

int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

int kthSmallest(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int p = partition(arr, low, high);
        if (p == k - 1) {
            return arr[p];
        } else if (p > k - 1) {
            high = p - 1;
        } else {
            low = p + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = kthSmallest(arr, n, k);

    if (result == -1) {
        cout << "Invalid value of k" << endl;
    } else {
        cout << "The " << k << "th smallest element is: " << result << endl;
    }

    return 0;
}

