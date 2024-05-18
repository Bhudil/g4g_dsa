#include <iostream>
using namespace std;

int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    else{                       // return n*fact(n-1)   recursive method
        int res=1;
        for (int i=1;i<=n;i++){
            res=res*i;
        }
        return res;
    }
}
int main() {
    int n=5;
    cout << fact(n);
    return 0;
}
