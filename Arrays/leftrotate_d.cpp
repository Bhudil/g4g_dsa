#include <iostream>
#include <cmath>
using namespace std;

void rev(int arr[],int low,int high){
    while(low<high){
        swap(arr[high],arr[low]);
        low++;
        high--;
    }
}
void rotateArr(int arr[], int d, int n){
    d=d%n;
    rev(arr,0,d-1);
    rev(arr,d,n-1);
    rev(arr,0,n-1);
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
