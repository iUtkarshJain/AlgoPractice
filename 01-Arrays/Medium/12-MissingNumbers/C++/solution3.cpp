#include<vector>
using namespace std;

int getSum(int n){
    return (n * (n + 1)) / 2;
}
// O(n) time | O(1) space
vector<int> missingNumbers(vector<int> nums){
    int n = nums.size() + 2, total = getSum(n);
    for(int i : nums)
        total -= i;
    
    int averageMissingValue = total / 2, foundFirstHalf = 0, foundSecondHalf = 0;
    for(int i : nums)
        if(i <= averageMissingValue)
            foundFirstHalf += i;
        else
            foundSecondHalf += i;
    
    int expectedFirstHalf = getSum(averageMissingValue), expectedSecondHalf = getSum(n) - expectedFirstHalf;
    return {expectedFirstHalf - foundFirstHalf, expectedSecondHalf - foundSecondHalf};
}