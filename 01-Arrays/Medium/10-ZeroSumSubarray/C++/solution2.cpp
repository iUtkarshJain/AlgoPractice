#include <vector>
#include <unordered_set>
using namespace std;
// O(n) time | O(n) space
bool zeroSumSubarray(vector<int> nums) {
  unordered_set<int> seen{0};
  int currSum = 0;

  for(int num : nums){
    currSum += num;
    if(seen.count(currSum))
      return true;
    seen.insert(currSum);
  }

  return false;
}

