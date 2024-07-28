class Solution{
public:
    int closer(int arr[], int n, int x) {
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == x) {
                return mid;  // Element found
            }

            // Check if x is present at adjacent positions
            if (mid > 0 && arr[mid - 1] == x) {
                return mid - 1;
            }
            if (mid < n - 1 && arr[mid + 1] == x) {
                return mid + 1;
            }

            // Decide which half to search
            if (arr[mid] > x) {
                right = mid - 2;  // Skip the adjacent element
            } else {
                left = mid + 2;   // Skip the adjacent element
            }
        }

        return -1;  // Element not found
    }
};