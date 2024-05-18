#include <iostream>
using namespace std;
double ToF(double c){
    return (c*9/5)+32;
}
int main() {
    int c=32;
    cout << ToF(c); //89.6
}
