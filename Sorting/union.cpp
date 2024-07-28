#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    vector<int> unionArray;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (i > 0 && arr1[i] == arr1[i - 1]) {
                i++;
                continue;
            }
            unionArray.push_back(arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (j > 0 && arr2[j] == arr2[j - 1]) {
                j++;
                continue;
            }
            unionArray.push_back(arr2[j]);
            j++;
        } else {
            if (i > 0 && arr1[i] == arr1[i - 1]) {
                i++;
                continue;
            }
            if (j > 0 && arr2[j] == arr2[j - 1]) {
                j++;
                continue;
            }
            unionArray.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while (i < n) {
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        unionArray.push_back(arr1[i]);
        i++;
    }
    while (j < m) {
        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }
        unionArray.push_back(arr2[j]);
        j++;
    }
    return unionArray;
}


