#include <iostream>

int maxAND (int a[], int n)
    {
        // Your code here
        int maxi = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
            maxi = max(maxi, a[i] & a[j]);
    }

    return maxi;
    }
