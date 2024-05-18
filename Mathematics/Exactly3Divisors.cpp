#include <iostream>
using namespace std;
bool isPrime(int N)
{
    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0) return false;
    }
    return true;
}

int exactly3Divisors(int N)
{
    int c=0;
    for(int i=2;i*i<=N;i++)
    {
        if(isPrime(i)) c++;
    }
    return c;
}
int main() {
    int n=40;
    cout << exactly3Divisors(n);
}
