#include <bits/stdc++.h>
using namespace std;
int minadjdiff(int arr[],int n){
    int mindiff=INT_MAX;
    for(int i=0;i<n;i++){
        int diff=abs(arr[i]-arr[(i+1)%n]);
        mindiff=min(diff, mindiff);
    }
    return mindiff;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minDiff = minadjdiff(arr, n);
    cout << minDiff << endl;

    return 0;
}