#include <bits/stdc++.h>
using namespace std;

long long maxsub(int arr[],int n){
    long long currsum=arr[0];
    long long maxsum=arr[0];
    for(int i=1;i<n;i++){
        currsum=max((long long)arr[i],currsum+arr[i]);
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = maxsub(arr, n);
    cout << maxSum << endl;

    return 0;
}
