#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
// O(n) time | O(n) space 
vector<int> twoNumberSum(vector<int> array, int targetSum) {
    unordered_set<int> seen;
    for(int num : array){
        int potentialMatch = targetSum - num;
        if(seen.count(potentialMatch))
            return {num, potentialMatch};
        seen.insert(num);
    }

    return {};
}