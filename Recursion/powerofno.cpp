#include <iostream>
long long power(int N,int R)
{
    //Your code here
    int mod=1e9+7;

    if(R==0){
        return 1;
    }

    long long ans=power(N,R/2);

    if(R%2==0){
        return (ans%mod * ans%mod)%mod;
    }

    else{
        return (ans%mod * ans%mod * N%mod)%mod;
    }


}

