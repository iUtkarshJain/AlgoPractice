#include <vector>
#include <unordered_set>
using namespace std;
// O(n) time | O(n) space
int firstDuplicateValue(vector<int> array) { 
    unordered_set<int> seen;

    for(int num : array)
        if(seen.count(num))
            return num;
        else
            seen.insert(num);
    
    return -1;
}
