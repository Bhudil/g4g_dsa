#include <bits/stdc++.h>
using namespace std;

long long minOperations(long long N)
{
    if(N == 1){
		return 0;
	}

	else if(N%2 == 0){
		return 1 + minOperations(N/2);
	}else{
		return 1 + min(minOperations(N-1),minOperations(N+1));
	}
