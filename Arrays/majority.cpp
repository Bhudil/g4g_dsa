#include <bits/stdc++.h>
using namespace std;

int majority(int arr[],int n,int x, int y){
    int cx=0;
    int cy=0;
    for (int i=0; i<n; i++){
        if(arr[i]==x){
            cx++;
        }
        else if(arr[i]==y){
            cy++;
        }
    }
    if(cx>cy)
        return x;
    else if (cy>cx)
        return y;
    else
        return (x<y)?x:y;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x, y;
    cin >> x >> y;
    int result = majority(arr, n, x, y);
    cout << result << endl;
    return 0;
}
