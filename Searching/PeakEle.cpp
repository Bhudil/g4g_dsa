#include <bits/stdc++.h>
using namespace std;

int peakindex(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(arr[0]>=arr[1]){
        return 0;
    }
    if(arr[n-1]>=arr[n-2]){
        return n-1;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]){
            return i;
        }
    }
    return 0;
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << "Peak: " << peakindex(arr, N) << endl;
    return 0;
}