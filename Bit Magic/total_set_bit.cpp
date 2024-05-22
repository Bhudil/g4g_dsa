#include <iostream>
int countSetBits(int n)
{
    // Your logic here
    if( n == 0 )return 0;
    if( n == 1)return 1;


    int x = 1;
    int cnt = 0;

    while( n >= x ){
        x = x * 2;
        cnt = cnt + 1;
    }

    cnt = cnt - 1;

    return ( pow(2 , cnt-1) * cnt )+ (n - pow(2,cnt) + 1 ) + countSetBits( n - pow(2,cnt) );
}

