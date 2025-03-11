#include <vector>
using namespace std;

// O(n) time | O(1) space
vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int l = 0, n = array.size();
  
  for(int r = 0; r < n; r++)
    if(array[r] != toMove){
      swap(array[l], array[r]);
      l++;
    }
  
  return array;
}
