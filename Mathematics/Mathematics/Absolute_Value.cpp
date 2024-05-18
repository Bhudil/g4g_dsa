#include <iostream>
#include <cmath>
using namespace std; //for abs() function
int absolute(int n){
    if (n>=0){
        return n;
    }
    else return n*(-1);
}
int main() {
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    cout << "Absolute Value= " << absolute(n);
}
 // can also use abs(n);