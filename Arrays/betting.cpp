#include <bits/stdc++.h>
using namespace std;

int net(string result){
    int sum=4;
    int bet=1;
    for(int i=0;i<result.length();i++){
        if(sum<bet){
            return -1;
        }
        if(result[i]=='W'){
            sum+=bet;
            bet=1;
        }
        else
           sum-=bet;
           bet*=2;
    }
    return sum;
}

