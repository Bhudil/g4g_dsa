#include <iostream>
#include <cmath>
long long RecursivePower(long long n,long long p)
{
    //Your code here
    if (p == 0)
        return 1;

    // Recursive case: calculate n^(p/2) and use it to calculate n^p
    long long halfPower = pow(n, p / 2);
    long long result = halfPower * halfPower;

    // If p is odd, multiply the result by n
    if (p % 2 != 0)
        result *= n;

    return result;


}
