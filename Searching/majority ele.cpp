#include <iostream>

int majorityElement(int a[], int size)
{
    int candidate = a[0];
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        } else if (a[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int countMajority = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == candidate) {
            countMajority++;
        }
    }

    if (countMajority > size / 2) {
        return candidate;
    } else {
        return -1;
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
