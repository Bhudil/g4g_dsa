#include <iostream>
using namespace std;

bool sparse(int n){
    int res= n & (n>>1);
    if (res==0)
        return true;
    return false;
}
int main() {
    int n=2;
    if (sparse(n)==1)
        cout << "True";
    else
        cout << "False";
}
