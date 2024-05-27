#include <iostream>

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;

    /*********************************
     * Your code here
     * This function should return a
     * vector with first element as
     * max and second element as
     * second max
     * *******************************/
    for (int i = 0; i < sizeOfArray; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find the second largest element
    for (int i = 0; i < sizeOfArray; i++) {
        if (arr[i] > max2 && arr[i] != max) {
            max2 = arr[i];
        }
    }

    // If no second largest element is found, set it to -1
    if (max2 == INT_MIN) {
        max2 = -1;
    }

    // Return the largest and second largest elements in a vector
    return {max, max2};
}
