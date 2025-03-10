#include <vector>
using namespace std;

vector<vector<int>> twoNumberSum(vector<int> &array, int targetSum, int left, int right){
    vector<vector<int>> res;
    
    while(left < right){
        int currSum = array[left] + array[right];
        if(currSum < targetSum){
            left++;
        }else if(currSum > targetSum){
            right--;
        }else{
            res.push_back({array[left], array[right]});
            left++;
            right--;
        }
    }

    return res;
}

// O(n^2) time | O(n) space
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
    int n = array.size();
    vector<vector<int>> res;
    sort(array.begin(), array.end());

    for(int i = 0; i < n - 2; i++){
        int currNum = array[i];
        vector<vector<int>> twoNumbers = twoNumberSum(array, targetSum - currNum, i + 1, n - 1);
        for(vector<int> twoNumber : twoNumbers)
            res.push_back({currNum, twoNumber[0], twoNumber[1]});
    }

    return res;
}