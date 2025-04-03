#include <vector>
using namespace std;
// O(n^2) time | O(1) space
bool zeroSumSubarray(vector<int> nums) {
  int n = nums.size();
  for(int i = 0; i < n; i++){
    int sum = nums[i];
    if(sum == 0)
      return true;
    for(int j = i + 1; j < n; j++){
      sum += nums[j];
      if(sum == 0)
        return true; 
    }
  }
  return false;
}
