#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// O(nlogn) time | O(1) space
int nonConstructibleChange(vector<int> coins) {
    sort(coins.begin(),coins.end());
    int maxChangePossible = 0;
    for(int coin : coins){
      if(coin > maxChangePossible + 1)
        return maxChangePossible + 1;
      maxChangePossible += coin;
    }
    return maxChangePossible + 1;
}