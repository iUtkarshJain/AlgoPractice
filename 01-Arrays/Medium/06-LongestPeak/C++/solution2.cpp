#include<vector>
using namespace std;
// O(n) time | O(1) space
int longestPeak(vector<int> array) {
  int longestPeakLength = 0, n = array.size(), i = 1;
  
  while(i < n - 1){
    bool isPeak = array[i - 1] < array[i] && array[i] > array[i + 1];
    if(!isPeak){
      i++;
      continue;
    }

    int leftIdx = i - 2, rightIdx = i + 2;
    
    while(leftIdx >= 0 && array[leftIdx] < array[leftIdx + 1])
      leftIdx--;

    while(rightIdx < n && array[rightIdx - 1] > array[rightIdx])
      rightIdx++;
    
    int currentPeakLength = rightIdx - leftIdx - 1; // (rightIdx - 1) - (leftIdx + 1) + 1
    longestPeakLength = max(longestPeakLength, currentPeakLength);
    i = rightIdx;
  }

  return longestPeakLength;
}