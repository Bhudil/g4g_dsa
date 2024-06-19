#include <bits/stdc++.h>
using namespace std;

vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C)
{
    //Your code here
    vector<int>v;
    int n=A.size();
    int m=B.size();
    int p=C.size();
    int i=0,j=0,k=0;
    A.push_back(int(1e7));
    B.push_back(int(1e7));
    C.push_back(int(1e7));
    while((i<n||j<m)||(k<p))
    {
        int m=min(A[i],min(B[j],C[k]));
        if(m==A[i])
        {
            v.push_back(A[i]);
            ++i;
        }
        else  if(m==B[j])
        {
            v.push_back(B[j]);
            ++j;
        }
        else  if(m==C[k])
        {
            v.push_back(C[k]);
            ++k;
        }
    }
    return v;
}
