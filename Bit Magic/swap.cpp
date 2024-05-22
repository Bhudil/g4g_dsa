#include <iostream>

using namespace::std;

unsigned int swapBits(unsigned int n) {
    // Create masks to isolate odd and even bits
    unsigned int oddMask = 0xAAAAAAAA; // 1010101010101010...
    unsigned int evenMask = 0x55555555; // 0101010101010101...

    // Isolate odd and even bits
    unsigned int oddBits = n & oddMask;
    unsigned int evenBits = n & evenMask;

    // Shift odd bits right and even bits left by 1
    oddBits >>= 1;
    evenBits <<= 1;

    // Combine the swapped bits
    return (oddBits | evenBits);
}

int main() {
    unsigned int n = 0x12345678; // Example input
    cout << "Original number: " << hex << n << endl;

    unsigned int swapped = swapBits(n);
    cout << "Number with swapped odd and even bits: " << hex << swapped << endl;

    return 0;
}