#include<iostream>
#include<vector>
using namespace std;
// O(n) time | O(1) space
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    int i = 0, j = 0, n = array.size(), m = sequence.size();
    while(i < n && j < m){
        if(array[i] == sequence[j])
            j++;
        i++;
    }
    
    return j == m;
}