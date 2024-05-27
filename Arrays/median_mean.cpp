#include <iostream>
#include <algorithm>
using namespace std;

int median(int a[],int n){
    sort(a,a+n);
    if(n%2==1)
        return a[n/2];
    else
        return (a[(n-1)/2]+a[n/2])/2;
}

int mean(int a[],int n){
    int sum=0;
    for (int i=0;i<n;i++)
        sum=sum+a[i];
    return sum/n;
}

int main() {
    int n;
    cout << "enter no of ele" << endl;
    cin >> n;
    int a[n];
    cout << "enter elements"<< endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "median: " << median(a,n)<< endl;
    cout << "mean: " << mean(a,n);

    return 0;
}
