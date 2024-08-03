#include <bits/stdc++.h>
using namespace std;

void rev_col(vector<vector<int>>&mat){
    int n=mat.size();
    int m=mat[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            swap(mat[i][j],mat[i][m-j-1]);
        }
    }
}

