#include<iostream>
#include<vector>
using namespace std;
// O(n) time | O(n) space
bool isValidSubsequence(vector<int> array, vector<int> sequence, int i = 0, int j = 0) {
    if(j == sequence.size())
        return true;
    if(i == array.size())
        return false;
    
    return isValidSubsequence(array, sequence, i + 1, j + (array[i] == sequence[j]));
}