#include <bits/stdc++.h>
    using namespace std;

    long long nearestPerfectSquare(long long N) {
        long long int above = ceil(sqrt(N+1)) * ceil(sqrt(N+1));
	    long long int below = floor(sqrt(N-1)) * floor(sqrt(N-1));

	    long long int diff1 = N - above;
	    long long int diff2 = below - N;

	    if(diff1 == diff2){
		    return below;
	    }else if(diff1 > diff2){
		    return above;
	    }else{
		    return below;
	    }
    }