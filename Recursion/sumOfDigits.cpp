#include <iostream>
using namespace std;

int sumd(int n){
    if (n==0)
        return 0;
    else
        return sumd(n/10)+ n%10;
}

int main() {
    int n=106;
    cout << sumd(n);
    return 0;
}
