#include <iostream>
using namespace std;
void insind(int arr[],int n, int ind, int ele){
    if (ind < 0 || ind>n)
        return;
    for(int i=n;i>ind;i--){
        arr[i]=arr[i-1];
    }
    arr[ind]=ele;
    n++;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }

    int ind;
    cout << "enter index where to be inserted"<< endl;
    cin >> ind;

    int ele;
    cout << "enter ele to be inserted"<< endl;
    cin >> ele;

    insind(arr,n,ind,ele);

    for(int j; j<n;j++){
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}

