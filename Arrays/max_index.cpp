#include <iostream>

int maxIndexDiff(int a[], int n)
{
    if (n <= 1) return 0;

    // Create and populate leftMin array
    int leftMin[n];
    leftMin[0] = a[0];
    for (int i = 1; i < n; ++i) {
        leftMin[i] = std::min(a[i], leftMin[i - 1]);
    }

    // Create and populate rightMax array
    int rightMax[n];
    rightMax[n - 1] = a[n - 1];
    for (int j = n - 2; j >= 0; --j) {
        rightMax[j] = std::max(a[j], rightMax[j + 1]);
    }

    // Traverse both arrays to find the maximum difference
    int i = 0, j = 0, maxDiff = -1;
    while (j < n && i < n) {
        if (leftMin[i] <= rightMax[j]) {
            maxDiff = std::max(maxDiff, j - i);
            j++;
        } else {
            i++;
        }
    }

    return maxDiff;
}
