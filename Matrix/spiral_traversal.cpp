#include <bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
    // code here
    int r=matrix.size();
    int c=matrix[0].size();
    int top=0;
    int right=c-1;
    int bottom=r-1;
    int left=0;
    vector<int> res;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            res.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            res.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(right>=left){
            for(int i=bottom;i>=top;i--){
                res.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return res;
}

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix1 = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
    };
    cout << "Test case 1:" << endl;
    cout << "Input matrix:" << endl;
    for (const auto& row : matrix1) {
        printVector(row);
    }
    cout << "Spiral traversal:" << endl;
    printVector(spirallyTraverse(matrix1));
    cout << endl;

    return 0;
}