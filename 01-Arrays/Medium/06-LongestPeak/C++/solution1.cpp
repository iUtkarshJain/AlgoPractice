#include<vector>
using namespace std;
// O(n) time | O(n) space
int longestPeak(vector<int> array) {
  int n = array.size(), res = 0, leftPeak[n], rightPeak[n], peak[n];
  leftPeak[0] = 0;
  rightPeak[n - 1] = 0;

  for(int i = 1; i < n; i++)
    if(array[i] > array[i - 1])
      leftPeak[i] = leftPeak[i - 1] + 1;
    else
      leftPeak[i] = 0;

  for(int i = n - 2; i >= 0; i--)
    if(array[i] > array[i + 1])
      rightPeak[i] = rightPeak[i + 1] + 1;
    else
      rightPeak[i] = 0;

  for(int i = 0; i < n; i++)
    if(leftPeak[i] != 0 && rightPeak[i] != 0)
      peak[i] = leftPeak[i] + rightPeak[i];
    else
      peak[i] = 0;

  for(int num : peak)
    res = max(res, num);
  return (res == 0) ? res : res + 1;
}