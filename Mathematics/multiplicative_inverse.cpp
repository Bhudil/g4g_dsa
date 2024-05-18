#include <iostream>
int GCD(int a, int b)
    {
        while(a != b)
        {
            if(a>b)
            {
                a = a-b;
            }
            else
            {
                b = b-a;
            }
        }
        return a;
    }
    int modInverse(int a, int m)
    {
        //Your code here
        if(m == 1)
        {
            return -1;
        }
        int gcd = GCD(a, m);
        if(gcd != 1)
        {
            return -1;
        }
        int i=0;
        while(true)
        {
            if((i*a)%m == 1)
            {
                return i;
            }
            i = i+1;
        }

    }
int main() {
    int a=3;
    int m=11;
    std::cout << modInverse(a,m); //4
}
