#include <bits/stdc++.h>
using namespace std;

void swapcol(vector<vector<int>>&mat){
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++){
        swap(mat[i][0],mat[i][m-1]);
    }
}

int main() {
    int n1 = 4, m1 = 4;
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};

    swapcol(matrix);

    // Print the modified matrix
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
