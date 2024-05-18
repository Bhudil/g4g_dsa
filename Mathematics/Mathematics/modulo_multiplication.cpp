#include <iostream>
using namespace std;

long long modmult(long long a, long long b){
    const long long mod=1000000007;
    return  ((a%mod)*(b%mod)%mod);
}
int main() {
    long long a=92233720368547758;
    long long b=92233720368547758;
    cout << modmult(a,b);   //484266119
}

