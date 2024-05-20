#include <iostream>
using namespace std;

bool check(int n, int k){
    if(n&(1<<k))
        return true;
    else
        return false;
}
int main() {
    int n=4;
    int k=2;
    if (check(n,k))
        cout << "true";
    else
        cout << "false";
}
