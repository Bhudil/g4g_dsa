#include <bits/stdc++.h>
using namespace std;

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < N - 1 && arr1[i] == arr1[i + 1]) {
        i++;
    }

    while (i < N && j < M) {
        if (arr1[i] < arr2[j]) {
            i++;
            while (i < N && arr1[i] == arr1[i - 1]) {
                i++;
            }
        } else if (arr1[i] > arr2[j]) {
            j++;
            while (j < M && arr2[j] == arr2[j - 1]) {
                j++;
            }
        } else {
            result.push_back(arr1[i]);
            i++;
            j++;
            while (i < N && arr1[i] == arr1[i - 1]) {
                i++;
            }
            while (j < M && arr2[j] == arr2[j - 1]) {
                j++;
            }
        }
    }
    return result;
}