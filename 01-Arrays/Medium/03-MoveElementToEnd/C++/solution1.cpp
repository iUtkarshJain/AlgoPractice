#include <vector>
using namespace std;
// O(n^2) time | O(1) space
vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int left = 0;
  int right = array.size() - 1;
  while (left < right){
    if(array[left] == toMove){
      for(int idx = left; idx <= right - 1;idx++)
        array[idx] = array[idx + 1];
      array[right] = toMove;
      right--;
    }else
      left++;
  }
  return array;
}