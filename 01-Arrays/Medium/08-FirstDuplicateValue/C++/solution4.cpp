#include <vector>
using namespace std;
// O(n) time | O(1) space
int firstDuplicateValue(vector<int> array) {
    for(int num : array){
        int absValue = abs(num), idx = absValue - 1;
        if(array[idx] < 0)
            return absValue;
        array[idx] *= -1;
    }

    return -1;
}
