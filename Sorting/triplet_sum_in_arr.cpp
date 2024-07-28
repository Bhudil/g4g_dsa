#include <bits/stdc++.h>
using namespace std;

bool trip(int arr[],int n,int x){
    sort(arr,arr+n);
    for(int i=0;i<=n-2;i++) {
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == x) {
                return true;
            } else if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }
    return false;
}

int main() {
    int arr1[] = {1, 4, 45, 6, 10, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int x1 = 13;
    cout << trip(arr1, n1, x1) << endl;  // Output: 1

    int arr2[] = {1, 2, 4, 3, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int x2 = 10;
    cout << trip(arr2, n2, x2) << endl;  // Output: 1

    int arr3[] = {40, 20, 10, 3, 6, 7};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int x3 = 24;
    cout << trip(arr3, n3, x3) << endl;  // Output: 0

    return 0;
}
