#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// O(nlog(n)) time | O(1) space
vector<int> twoNumberSum(vector<int> array, int targetSum) {
    sort(array.begin(), array.end());
    int left = 0, rright = array.size() - 1;
    while(left < rright){
        int currSum = array[left] + array[rright];
        if(currSum < targetSum)
            left++;
        else if(currSum > targetSum)
            rright--;
        else
            return {array[left], array[rright]};
    }
    
    return {};
}