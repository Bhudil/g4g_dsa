#include <iostream>
using namespace std;

long long modadd(long long a, long long b){
    const long long mod=1000000007;
    return  ((a%mod)+(b%mod)%mod);
}
int main() {
    long long a=9223372036854775807;
    long long b=9223372036854775807;
    cout << modadd(a,b);   //582344006
}
