#include <iostream>

int jos(int n, int k){
    if (n==0)
        return 0;
    else
        return (jos(n-1,k)+k)%n;
}

int josephus(int n,int k){
    int x= jos(n,k);
    return x+1;
}

int main() {
    int n=3;
    int k=2;
    std::cout << josephus(n,k) << std::endl;
    return 0;
}
