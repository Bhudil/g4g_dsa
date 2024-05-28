#include <iostream>
vector<int> leaders(int a[], int n){
    // Code here
    vector<int>b;
    for (int i=0;i<n-1;i++)
    {   int c=0;
        for (int j=i+1;j<n;j++)
        {
            if (a[j]>a[i])
            {   c=1;
                break;
            }
        }
        if (!c) b.push_back(a[i]);
    }
    b.push_back(a[n-1]);
    return b;
}
