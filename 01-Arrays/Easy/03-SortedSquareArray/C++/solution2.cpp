#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// O(n) time | O(n) space
vector<int> sortedSquaredArray(vector<int> array) {
    int l = 0, r = array.size() - 1;
    vector<int> res;
    while(l <= r)
        if(abs(array[l]) > abs(array[r]))
            res.push_back(array[l] * array[l++]);
        else
            res.push_back(array[r] * array[r--]);
    
    reverse(res.begin(), res.end());
    return res;
}