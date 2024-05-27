#include <iostream>
using namespace std;
void insend(int arr[],int n,int ele){
    if (n==0)
        return;
    arr[n-1]=ele;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }

    int ele;
    cout << "enter ele to be inserted"<< endl;
    cin >> ele;

    insend(arr,n,ele);

    for(int j; j<n;j++){
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
