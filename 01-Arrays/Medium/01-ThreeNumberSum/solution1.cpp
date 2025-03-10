#include <vector>
using namespace std;

// O(n^3) time | O(n) space
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  vector<vector<int>> res{};
  sort(array.begin(),array.end());
  for(int i = 0; i < array.size() - 2; i++)
    for(int j = i + 1; j < array.size() - 1; j++)
      for(int k = j + 1; k < array.size() ; k++)
        if(array[i] + array[j] + array[k] == targetSum)
          res.push_back({array[i],array[j],array[k]});
  return res;
}