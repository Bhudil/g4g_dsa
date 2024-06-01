#include <iostream>
using namespace std;
int maxEvenOdd(int arr[], int n)
    {
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if(arr[i]%2 != arr[i-1]%2){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
        }
    }
    return res;
    }
