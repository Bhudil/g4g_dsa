#include <bits/stdc++.h>
using namespace std;

vector<int> bt(vector<vector<int>>mat, int n,int m){
    vector<int> res;
    if(n==1){
        for(int i=0;i<m;i++){
            res.push_back(mat[0][i]);
        }
    }
    else if(m==1){
        for(int i=0;i<n;i++){
            res.push_back(mat[i][0]);
        }
    }
    else{
        for(int j=0;j<m;j++){
            res.push_back(mat[0][j]);
        }
        for(int j=1;j<n;j++){
            res.push_back(mat[j][m-1]);
        }
        for(int j=m-2;j>=0;j--){
            res.push_back(mat[n-1][j]);
        }
        for(int j=n-2;j>=1;j--){
            res.push_back(mat[j][0]);
        }
    }
}
