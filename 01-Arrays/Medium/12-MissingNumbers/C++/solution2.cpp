#include<vector>
#include<unordered_set>
using namespace std;

// O(n) time | O(n) space
vector<int> missingNumbers(vector<int> nums){
    unordered_set<int> includedNums(nums.begin(), nums.end());
    vector<int> res;
    int n = nums.size() + 2;

    for(int i = 1; i <= n; i++)
        if(includedNums.count(i) == 0)
            res.push_back(i);
    
    return res;
}