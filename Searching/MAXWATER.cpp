#include<bits/stdc++.h>
using namespace std;

int maxWater(int height[], int n) {
    int max_water = 0;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int gap = right - left - 1;
        int min_height = min(height[left], height[right]);
        max_water = max(max_water, gap * min_height);

        if (height[left] < height[right]) {
            left += 1;
        } else {
            right -= 1;
        }
    }

    return max_water;
}

int main() {
    int n;
    cin >> n;
    int height[n];
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    cout << maxWater(height, n) << endl;
    return 0;
}