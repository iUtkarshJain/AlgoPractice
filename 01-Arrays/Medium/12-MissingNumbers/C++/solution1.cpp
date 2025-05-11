#include<vector>
#include<algorithm>
using namespace std;

// O(nlogn) time | O(logn) space
vector<int> missingNumbers(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> res;

    for(int i = 0, curr = 1; i < n; i++, curr++){
        if(nums[i] != curr){
            res.push_back(curr);
            i--;
        }
    }

    if(res.size() == 0){
      res.push_back(n + 1);
      res.push_back(n + 2);
    }else if(res.size() == 1){
      if(nums.back() == n + 1)
        res.push_back(n + 2);
      else
        res.push_back(n + 1);
    }

    return res;
}
