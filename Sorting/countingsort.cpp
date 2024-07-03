#include <bits/stdc++.h>
using namespace std;

string countSort(string arr){
    // code here
    int freq[26] = {0};

    // Count the frequency of each character
    for (char c : arr) {
        freq[c - 'a']++;
    }

    // Modify the frequency array to get the cumulative frequency
    for (int i = 1; i < 26; i++) {
        freq[i] += freq[i-1];
    }

    // Create a result array to store the sorted string
    char result[arr.length()];

    // Traverse the input string from right to left
    for (int i = arr.length()-1; i >= 0; i--) {
        char c = arr[i];
        result[freq[c - 'a']-1] = c;
        freq[c - 'a']--;
    }

    // Convert the result array to a string
    string sortedArr(result, arr.length());

    return sortedArr;
}