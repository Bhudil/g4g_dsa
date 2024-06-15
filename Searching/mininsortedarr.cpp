int minNumber(int arr[], int low, int high)
{
    // If the array is not rotated at all
    if (arr[low] <= arr[high]) {
        return arr[low];
    }

    // Binary search way
    while (low <= high) {
        // Find the mid index
        int mid = low + (high - low) / 2;

        // Check if mid+1 is the minimum element
        if (mid < high && arr[mid] > arr[mid + 1]) {
            return arr[mid + 1];
        }

        // Check if mid itself is the minimum element
        if (mid > low && arr[mid] < arr[mid - 1]) {
            return arr[mid];
        }

        // Decide whether we need to go to the left half or the right half
        if (arr[mid] >= arr[low]) {
            // Minimum must be in the right half
            low = mid + 1;
        } else {
            // Minimum must be in the left half
            high = mid - 1;
        }
    }

    return -1; // This line will never be executed if input is valid as per the problem statement
}
