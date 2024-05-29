#include <bits/stdc++.h>
using namespace std;



long long trappingWater(int arr[], int n){
    vector<int>pmx(n,0);
    vector<int>smx(n,0);
    pmx[0]=arr[0];
    smx[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        pmx[i]=max(pmx[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        smx[i]=max(smx[i+1],arr[i]);
    }

    long long sum=0;
    for(int i=0; i<n; i++){
        long long val = min(pmx[i],smx[i])-arr[i];
        sum+=val;
    }
    return sum;
}

//long long TWP(int arr[],int n){
//    int res=0;
//    for(int i=1;i<n-1;i++){
//        int left=arr[1];
//        for (int j=0;j<n;j++){
//            left=max(left,arr[j]);
//        }
//        int right;
//        for (int j=0;j<n;j++) {
//            right = max(right, arr[j]);
//        }
//        res=(min(left,right)-arr[i]);
//    }
//    return res;
//}
