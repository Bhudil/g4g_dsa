#include <bits/stdc++.h>
using namespace std;

pair<long, long> findRepeating(long *arr, int n){
    for (int i=0;i<n-1;i++){
        if (arr[i]==arr[i+1]){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            return {arr[i],count};
        }
    }
    return{-1,-1};
}


