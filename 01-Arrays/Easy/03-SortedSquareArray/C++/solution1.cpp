#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// O(nlogn) time | O(n) space
vector<int> sortedSquaredArray(vector<int> array) {
    vector<int> res;
    for(int num : array)
      res.push_back(num * num);
    sort(res.begin(), res.end());
    return res;
  }