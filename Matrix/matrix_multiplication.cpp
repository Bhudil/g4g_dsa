#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> multi(const vector<vector<int>>&a,const vector<vector<int>>&b){
    int n1=a.size();
    int m1=a[0].size();
    int n2=b.size();
    int m2=b[0].size();

    if(m1!=n2){
        return {};
    }
    vector<vector<int>> res(n1,vector<int>(m2,0));
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            for(int k=0;k<m1;k++){
                res[i][j]+=a[i][j]*b[i][j];
            }
        }
    }
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
