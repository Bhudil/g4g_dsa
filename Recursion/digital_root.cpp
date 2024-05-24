#include <iostream>
using namespace std;

int DR(int n){
    if (n<10)
        return n;
    int res=0;
    while(n>0) {
        res += n % 10;
        n = n / 10;
    }
    return res;
}

int main() {
    int n=19;
    cout << DR(n);
    return 0;
}
