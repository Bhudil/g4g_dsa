#include <bits/stdc++.h>
using namespace std;

int mindiff(int arr[],int n){
    sort(arr,arr+n);
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        res=min(res,arr[i]-arr[i-1]);
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Min Difference:" << mindiff(arr,n)<< endl;
    return 0;
}
