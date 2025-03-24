#include <vector>
using namespace std;
// O(n^2) time | O(1) space
int firstDuplicateValue(vector<int> array) { 
    int n = array.size();
    
    for(int i = 0; i < n; i++)
        for(int j = i - 1; j >= 0; j--)
            if(array[i] == array[j])
                return array[i];
    
    return -1;
}
