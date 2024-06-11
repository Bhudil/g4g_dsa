#include <unordered_map>
using namespace std;

int countOccurence(int arr[], int n, int k) {
    // Create a map to store the count of each element
    unordered_map<int, int> count;

    // Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Count the number of elements that appear more than n/k times
    int result = 0;
    for (auto it = count.begin(); it != count.end(); it++) {
        if (it->second > n / k) {
            result++;
        }
    }

    return result;
}
