#include <bits/stdc++.h>
using namespace std;

long long mergecount(long long arr[],vector<long long>&temp,int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int k=left;
    long long inv_count=0;

    while((i<=mid) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inv_count +=(mid-i+1);
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(i=left;i<=right;i++){
        arr[i]=temp[i];
    }
    return inv_count;
}

long long mergesortcount(long long arr[],vector<long long>&temp,int left,int right){
    int mid;
    long long inv_count=0;
    if(left<right){
        mid = left+(right-left)/2;
        inv_count+=mergesortcount(arr,temp,left,mid);
        inv_count+=mergesortcount(arr,temp,mid+1,right);
        inv_count+=mergecount(arr,temp,left,mid,right);
    }
    return inv_count;
}
long long int inversionCount(long long arr[], int n) {
    vector<long long>temp(n);
    return mergesortcount(arr,temp,0,n-1);
}