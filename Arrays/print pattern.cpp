#include <bits/stdc++.h>
using namespace std;

vector<int> pattern(int N){
    if (N <= 0) {
        cout << N << " ";
        if (N == -5) {
            cout << 0 << " ";
        }
        return {};
    }
    cout << N << " ";
    vector<int> result = pattern(N - 5);
    cout << N << " ";
    return result;
}
