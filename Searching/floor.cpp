#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x){
    long long low = 0, high = n - 1;
    long long floor = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (v[mid] == x) {
            return mid;
        } else if (v[mid] < x) {
            floor = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return floor;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
