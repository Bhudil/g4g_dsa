#include <iostream>
bool checkRotatedAndSorted(int arr[], int n){

    // Your code here
    int incDrops=0,decDrops=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]) incDrops++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[(i+1)%n]) decDrops++;
    }
    return(incDrops==1 || decDrops==1);

}
