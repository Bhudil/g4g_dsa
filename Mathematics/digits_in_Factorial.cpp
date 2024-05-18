#include <iostream>
using namespace std;
#include <cmath>
int digitsInFactorial(int N)
{
    double d=0;
    for(int i=2;i<=N;i++)
        d+=log10(i);
    return int(d)+1;
}
int main() {
    int n=5;
    cout << digitsInFactorial(n);
}
