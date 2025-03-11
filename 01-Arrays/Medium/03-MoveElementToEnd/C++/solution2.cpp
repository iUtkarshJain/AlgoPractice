#include <vector>
using namespace std;

// O(n) time | O(1) space, doesn't take care of relative order of other numbers
vector<int> moveElementToEnd(vector<int> array, int toMove) {
    int i = 0, j = array.size() - 1;
    while(i < j){
      while(i < j && array[j] == toMove) j--;
      if(array[i] == toMove)
        swap(array[i], array[j]);
      i++;
    }
    return array;
  }