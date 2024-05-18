#include <iostream>
#include <cmath>
using namespace std;

double GP(int a, int b, int n){
    double r=b/a;
    return a*pow(r,n-1);
}

int main() {
    int a=1;
    int b=2;
    int n=5;
    cout << GP(a,b,n);   //5th term of GP is 16
}
