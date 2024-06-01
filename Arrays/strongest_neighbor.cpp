#include <iostream>
using namespace std;
void maxadj(int n,int a[]){
    for (int i=1;i<n;i++)
        cout << max(a[i-1],a[i])<< " ";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    maxadj(n,arr);
    return 0;
}
