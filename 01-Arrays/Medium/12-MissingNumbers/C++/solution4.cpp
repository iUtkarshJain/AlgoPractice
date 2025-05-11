#include<vector>
using namespace std;

// O(n) time | O(1) space
vector<int> missingNumbers(vector<int> nums){
    int missingNumbersXOR = 0, n = nums.size();

    for(int i = 0; i <= n + 2; i++){
        missingNumbersXOR ^= i;
        if(i < n)
            missingNumbersXOR ^= nums[i]; 
    }

    int setBit = missingNumbersXOR & -missingNumbersXOR;
    vector<int> res{0, 0};

    for(int i = 0; i <= n + 2; i++){
        if(i & setBit)
            res[0] ^= i;
        else
            res[1] ^= i;
        
        if(i < n)
            if(nums[i] & setBit)
                res[0] ^= nums[i];
            else
                res[1] ^= nums[i];
    }

    if(res[0] > res[1])
        swap(res[0], res[1]);

    return res;
}