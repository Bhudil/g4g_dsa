#include <bits/stdc++.h>
using namespace std;

int threeway(vector<int>& array, int a,int b){
    int n = array.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (array[mid] < a) {
            swap(array[low], array[mid]);
            low++;
            mid++;
        } else if (a <= array[mid] && array[mid] <= b) {
            mid++;
        } else {
            swap(array[mid], array[high]);
            high--;
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
