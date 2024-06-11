#include <iostream>
using namespace std;

int leftIndex(int N, int arr[], int X) {
    int low = 0, high = N - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] < X) {
            low=mid+1;
        } else if (arr[mid] > X) {
            high = mid - 1;
        } else {
            if(mid==0||arr[mid-1]!=arr[mid]){
                return mid;
            }else{
                return high=mid-1;
            }
        }
    }
    return -1;
}

int main() {
    int N = 10;
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5, 6, 7};
    int X = 1;
    cout << leftIndex(N, arr, X) << endl;
    return 0;
}
