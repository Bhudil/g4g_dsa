#include <iostream>
using namespace std;

int searchInSorted(int arr[], int N, int K)
{

    // Your code here
    int low=0;
    int high=N-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==K){
            return 1;
        }
        else if(arr[mid]<K){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int result = searchInSorted(arr, n, target);
    if (result != -1) {
        cout << "Found" << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}
