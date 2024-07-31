#include <bits/stdc++.h>
using namespace std;

void rot(vector<vector<int>> matrix,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int low=0;
        int high=n-1;
        while(high>low){
            swap(matrix[low][i],matrix[high][i]);
            high--;
            low++;
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
