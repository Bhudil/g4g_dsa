#include <bits/stdc++.h>
using namespace std;

int minplat(int arr[],int dep[],int n){
    int i=0;
    int j=0;
    int cut=0;
    int res=0;
    sort(arr,arr+n);
    sort(dep,dep+n);
    while(i<n){
        if(arr[i]<=dep[j]){
            i++;
            cut++;
        }
        else{
            j++;
            cut--;
        }
        res=max(res,cut);
    }
    return res;
}
