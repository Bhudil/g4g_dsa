#include <iostream>

int grayToBinary(int gray) {
    int binary = 0;
    for (int mask = gray >> 1; mask != 0; mask = mask >> 1) {
        binary = binary ^ mask;
    }
    return (binary ^ gray);
}

int b2g(int n){
    return n^(n>>1);
}


int main() {
    int n=7;
    std::cout << b2g(n) << std::endl;
    return 0;
}

