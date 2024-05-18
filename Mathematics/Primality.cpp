#include <iostream>
using namespace std;

bool Prime(int n){
    if (n<=1){
        return false;
    }
    else{
        for(int i=2;i*i<n;i++)
            if (n%i==0){
                return false;
            }
        return true;
    }
}
int main() {
    int n;
    cout << "enter number= " <<endl;
    cin >> n;
    if (Prime(n)==1){
        cout << "True";
    }
    else cout << "False";
}
