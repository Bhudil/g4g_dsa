#include <iostream>
#include <vector>

using namespace std;

void transpose(vector<vector<int> >& matrix, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printMatrix(const vector<vector<int> >& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example 1
    vector<vector<int> > matrix1 = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
    int n1 = 4;

    cout << "Example 1:" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrix1);

    transpose(matrix1, n1);

    cout << "Transposed matrix:" << endl;
    printMatrix(matrix1);

    cout << endl;

    // Example 2
    vector<vector<int> > matrix2 = {
            {1, 2},
            {-9, -2}
    };
    int n2 = 2;

    cout << "Example 2:" << endl;
    cout << "Original matrix:" << endl;
    printMatrix(matrix2);

    transpose(matrix2, n2);

    cout << "Transposed matrix:" << endl;
    printMatrix(matrix2);

    return 0;
}