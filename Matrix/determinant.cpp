#include <bits/stdc++.h>
using namespace std;

int det(vector<vector<int>> mat,int n) {
    if (n == 1) {
        return mat[0][0];
    }
    if (n == 2) {
        return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    }
    int detr = 0;
    for (int j = 0; j < n; j++) {
        vector<vector<int>> submatrix(n - 1, vector<int>(n - 1));
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int k = 0; k < n; k++) {
                if (k == j) continue;
                submatrix[i - 1][subj] = mat[i][k];
                subj++;
            }
        }
        detr += (j % 2 == 0 ? 1 : -1) * mat[0][j] * det(submatrix, n - 1);
    }
    return detr;
}
