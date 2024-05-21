#include <iostream>

unsigned int getFirstSetBit(int n)
{                             // or use ffs(n) pre-buit function
    if(n==0)
        return 0;

    int pos=0;
    while((n&1)==0)
    {
        n=n>>1;
        pos++;
    }
    return pos+1;
}

int main() {
    std::cout << getFirstSetBit(18) << std::endl;
    return 0;
}
