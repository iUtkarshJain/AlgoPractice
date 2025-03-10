#include <vector>
#include <limits.h>
using namespace std;
// O(n*m) time | O(1) space 
vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  int smallest = INT_MAX;
  vector<int> res;
  for(int n1 : arrayOne)
    for(int n2 : arrayTwo)
      if(abs(n1 - n2) < smallest){
        smallest = abs(n1 - n2);
        res = {n1,n2};
      }
  return res;
}