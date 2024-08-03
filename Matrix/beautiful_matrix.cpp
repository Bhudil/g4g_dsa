#include <bits/stdc++.h>
using namespace std;

int findMinOpeartion(vector<vector<int> > matrix, int n)
{
    int maxsum = 0;
    int count=0;
    vector<int> rowsum(n,0);
    vector<int> colsum(n,0);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rowsum[i]+=matrix[i][j];
            colsum[j]+=matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        maxsum=max(maxsum,rowsum[i]);
        maxsum=max(maxsum,colsum[i]);
    }

    for(int i=0;i<n;i++){
        count+=(maxsum-rowsum[i]);
    }
    return count;
}
