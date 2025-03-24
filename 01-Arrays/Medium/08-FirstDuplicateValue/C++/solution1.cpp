#include <vector>
using namespace std;
// O(n^2) time | O(1) space
int firstDuplicateValue(vector<int> array) { 
  int minimumIdx = array.size();
  for(int i = 0;i < array.size(); i++){
    for(int j = i + 1; j < array.size(); j++){
      if(array[i] == array[j]){
        minimumIdx = min(minimumIdx,j);
      }
    }
  }
  if(minimumIdx != array.size())
    return array[minimumIdx];
  else
    return -1;
}
