#include <iostream>
#include <strings.h>

int rightmost(int m,int n){
    if (m==n)
        return -1;
    else {
        int s = m ^ n;
        return ffs(s);
    }
}

