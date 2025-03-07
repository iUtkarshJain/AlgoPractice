#include<iostream>
#include <vector> 
using namespace std;
// O(n^2) time | O(1) space
vector<int> twoNumberSum(vector<int> array, int targetSum) {
    int n = array.size();
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(array[i] + array[j] == targetSum)
                return {array[i], array[j]};
    
    return {};            
}