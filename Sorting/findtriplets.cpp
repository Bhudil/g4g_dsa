#include <bits/stdc++.h>
using namespace std;

bool trip(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (trip(arr, n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
