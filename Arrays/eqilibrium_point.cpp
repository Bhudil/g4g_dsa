#include <iostream>

int EP(long long a[],int n){
    if(n==1)
        return 1;
    long long totsum=0;
    for(int i=0;i<n;i++){
        totsum+=a[i];
    }
    long long leftsum=0;
    for(int i=0;i<n;i++){
        totsum-=a[i];
        if(leftsum==totsum){
            return i+1;
        }
        leftsum+=a[i];
    }
    return -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
