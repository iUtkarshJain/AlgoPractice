#include <vector>

using namespace std;
// O(n) time | O(1) space
vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int second = 0;
    while(second < array.size() && array[second] != toMove)
        second++;
    int first = second + 1;
    while(first < array.size() && array[first] == toMove)
        first++;
    while (first < array.size()) {
        swap(array[first], array[second]);
        while(first < array.size() && array[first] == toMove)
            first++;
        while(second < array.size() && array[second] != toMove)
            second++;
    }
  return array;
}