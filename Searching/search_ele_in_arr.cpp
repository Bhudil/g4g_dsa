#include <iostream>
using namespace std;

int searchl(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if (arr[i]==x)
            return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int result = searchl(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
}
