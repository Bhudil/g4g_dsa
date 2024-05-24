#include <iostream>
bool isLucky(int n, int counter=2) {
        // code here
       if (n <= 1)
        return true;
    if (n < counter)
        return true;
    if (n % counter == 0)
        return false;
    return isLucky(n - n / counter, counter + 1);

    }
int main() {
    int n=19;
    std::cout << isLucky(n) << std::endl;
    return 0;
}
