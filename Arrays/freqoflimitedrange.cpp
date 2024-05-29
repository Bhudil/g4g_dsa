#include <iostream>

void frequencyCount(vector<int>& arr,int N, int P)
{
    // code here
    vector<int>n(N+1,0);

    for(int i=0;i<N;i++){
        if(arr[i]<=N){
            n[arr[i]]++;
        }
    }

    for(int i=1;i<=N;i++){
        arr[i-1]=n[i];
    }
}