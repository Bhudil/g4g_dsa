#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> summat(const vector<vector<int>>&A,const vector<vector<int>>&B){
    if(A.size()!=B.size() || A[0].size()!=B[0].size()){
        return {};
    }
    int n=A.size();
    int m=A[0].size();

    vector<vector<int>> res(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j]=A[i][j]+B[i][j];
        }
    }
}

