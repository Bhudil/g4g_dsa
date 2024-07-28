#include <bits/stdc++.h>
using namespace std;

void seg012(int arr[], int N){
    int low=0;
    int mid=0;
    int high=N-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int N;
    cin >>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    seg012(arr,N);
    cout << "Sorted" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}