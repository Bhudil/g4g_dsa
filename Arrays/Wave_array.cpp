#include <bits/stdc++.h>
using namespace std;

void wave(int n,vector<int>&arr){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    wave(n, arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
