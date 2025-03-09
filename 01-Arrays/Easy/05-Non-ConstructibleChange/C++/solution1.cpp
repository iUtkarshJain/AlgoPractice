#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void helper(vector<int> &coins, int idx, int lastSum, unordered_set<int> &allPossible){
    if(idx < 0)
        return;
    helper(coins, idx - 1, lastSum, allPossible);
    allPossible.insert(lastSum + coins[idx]);
    helper(coins, idx - 1, lastSum + coins[idx], allPossible);
}

// O(2^n) time | O(2^n) space 
int nonConstructibleChange(vector<int> coins){
    unordered_set<int> allPossible;
    helper(coins, coins.size() - 1, 0, allPossible);
    
    int currSum = 1;
    while(allPossible.count(currSum))
        currSum++;
    
    return currSum;
}