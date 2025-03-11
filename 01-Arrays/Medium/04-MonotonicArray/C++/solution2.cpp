#include<vector>
using namespace std;
// O(n) time | O(1) space, less error-prone and less constants
bool isMonotonic(vector<int> array) {
  int n = array.size();
  bool isMonoInc = true, isMonoDec = true;
  
  for(int i = 0; i < n - 1; i++){
    if(array[i + 1] < array[i])
      isMonoInc = false;
    if(array[i + 1] > array[i])
      isMonoDec = false;
  }
    
  return isMonoInc || isMonoDec;
}
