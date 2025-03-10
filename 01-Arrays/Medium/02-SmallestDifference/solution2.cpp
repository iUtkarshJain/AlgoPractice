#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// O(nlogn + mlogm) time | O(1) space 
vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
    sort(arrayOne.begin(), arrayOne.end());
    sort(arrayTwo.begin(), arrayTwo.end());
    
    int smallestDistance = abs(arrayOne[0] - arrayTwo[0]), onePtr = 0, twoPtr = 0, n = arrayOne.size(), m = arrayTwo.size();
    vector<int> res{arrayOne[0], arrayTwo[0]};

    while(onePtr < n && twoPtr < m){
        int currDistance = abs(arrayOne[onePtr] - arrayTwo[twoPtr]);
        if(currDistance < smallestDistance){
            smallestDistance = currDistance;
            res = {arrayOne[onePtr], arrayTwo[twoPtr]};
        }

        if(arrayOne[onePtr] < arrayTwo[twoPtr])
            onePtr++;
        else if(arrayOne[onePtr] > arrayTwo[twoPtr])
            twoPtr++;
        else
            return res;
    }

    return res;
}