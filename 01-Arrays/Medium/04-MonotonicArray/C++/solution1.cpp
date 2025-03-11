#include<vector>
using namespace std;

bool breaksDirection(int direction, int prevInt, int currInt){
  int diff = currInt - prevInt;
  if(direction > 0)
    return diff < 0;
  return diff > 0;
}

// O(n) time | O(1) space  
bool isMonotonic(vector<int> array) {
  int n = array.size();
  if(n <= 2)
      return true;
  int direction = array[1] - array[0];

  for(int i = 2; i < n; i++){
    int currentDirection = array[i] - array[i - 1];
    if(direction == 0)
      direction = currentDirection;
    else if(breaksDirection(direction, array[i - 1], array[i]))
      return false;
  }

  return true;
}
