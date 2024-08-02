#include <bits/stdc++.h>
using namespace std;

vector<int> tri_sum(const vector<vector<int>>&m,int n){
    int up=0;
    int low=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                up+=m[i][j];
            }
            if(i>=j){
                low+=m[i][j];
            }
        }
    }
    vector<int> res(2);
    res[0]=up;
    res[1]=low;
    return res;
}