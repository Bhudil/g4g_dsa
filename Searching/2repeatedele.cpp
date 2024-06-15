#include <bits/stdc++.h>
using namespace std;

vector<int> twoRepeated (int arr[], int n) {
    vector<int> ans;
    for(int i=0;i<n+2;i++){
        if(arr[abs(arr[i])] > 0){
            arr[abs(arr[i])] *= -1;
        }
        else{
            ans.push_back(abs(arr[i]));
        }
    }
    return ans;
}