#include <iostream>
int a[1000000];

int maxOccured(int L[], int R[], int n, int maxx){

    // Your code here
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        a[L[i]]+=1;
        a[R[i]+1]-=1;
    }
    int msum=a[0],ind=0;
    for(int i=1;i<=maxx;i++){
        a[i]+=a[i-1];
        if(msum<a[i]){
            msum=a[i];
            ind=i;
        }
    }
    return ind;
}