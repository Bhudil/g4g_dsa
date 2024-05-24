#include <iostream>
using namespace std;

int countdigit(int n){
    if (n>=0 && n<10)
        return 1;
    else return 1+ countdigit(n/10);
}

int main() {
    int n=106;
    cout << countdigit(n);
    return 0;
}
