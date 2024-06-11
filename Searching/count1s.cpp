#include <bits/stdc++.h>
using namespace std;

int countconsec(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "no of ele";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout << "count" << countconsec(arr,n)<< endl;
}
