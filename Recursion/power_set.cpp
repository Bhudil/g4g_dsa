#include <iostream>

void powerSet(string str, int index, string current, vector<string>& result) {
    // Base case: If the index is equal to the length of the string, add the current string to the result vector
    if (index == str.length()) {
        result.push_back(current);
        return;
    }

    // Recursive case 1: Include the current character
    powerSet(str, index + 1, current + str[index], result);

    // Recursive case 2: Exclude the current character
    powerSet(str, index + 1, current, result);
}

//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string str)
{
   //Your code here
   vector<string> result;
    powerSet(str, 0, "", result);
    return result;
}
