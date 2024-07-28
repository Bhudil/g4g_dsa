#include <bits/stdc++.h>
  using namespace  std;

  void sortABS(int k, vector<int> &arr) {

        multimap<int, int> mp;
        // Store values in a map with the difference
        // with X as key
        int n=arr.size();
        for (int i = 0; i < n; i++) {
            mp.insert(make_pair(abs(k - arr[i]), arr[i]));
        }

        // Update the values of array
        int i = 0;
        multimap<int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++) {
            arr[i++] = (*it).second;
        }
    }

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
