#include <iostream>
using namespace std;

void one2N(int n){
    if (n==0)
        return;
    one2N(n-1);
    cout << n<< " ";
}
int main() {
    int n=10;
    one2N(n);
    return 0;
}
