#include <vector>
using namespace std;
// O(n) time | O(1) space
int quickselect(vector<int> array, int k) {
  int start = 0, end = array.size() - 1;
  int neededIdx = k - 1;

  while(true){
    int pivot = start, left = start + 1, right = end;
    while(left < right){
      while(array[left] < array[pivot] && left < end)
        left++;
      while(array[right] > array[pivot] && right > start)
        right--;
      if(left < right)
        swap(array[left], array[right]);
    }
    swap(array[pivot], array[right]);
    if(right == neededIdx)
      break;
    if(right < neededIdx)
      start = right + 1;
    else if(right > neededIdx)
      end = right - 1;
  }
  return array[neededIdx];
}