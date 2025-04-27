#include <vector>
using namespace std;
// O(n) time | O(1) space
int bestSeat(vector<int> seats) {
  int n = seats.size(), bestSeat = -1, right = 0, largestSpace = 0;

  while(right < n){
    if(seats[right]){
      right++;
      continue;
    }

    int left = right;
    while(right < n && seats[right] == 0)
      right++;
    int currSpace = right - left;
    if(currSpace > largestSpace){
      largestSpace = currSpace;
      bestSeat = (left + right - 1) / 2;
    }
  }

  return bestSeat;
}
