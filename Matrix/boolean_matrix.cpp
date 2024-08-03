#include <bits/stdc++.h>
using namespace std;

void boolmat(vector<vector<int>>&mat){
    int r=mat.size();
    int c=mat[0].size();

    vector<bool> row(r,false);
    vector<bool> col(c,false);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j])==1){
            row[i]=true;
            col[j]=true;
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(row[i] || col[j]){
                mat[i][j]==1;
            }
        }
    }
}
