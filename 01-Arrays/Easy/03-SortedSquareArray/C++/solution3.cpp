#include <iostream>
#include <vector>
using namespace std;
//O(n) time and O(n) space
vector<int> sortedSquaredArray(vector<int> array) {
  vector<int> pos;
  vector<int> neg;
  for(int x : array){
    if(x >= 0)
      pos.push_back(x*x);
    else
      neg.push_back(x*x);
  }
  vector<int> req;
  int p = 0;
  int n = neg.size()-1;
  while(n >= 0 && p < pos.size()){
    if(neg.at(n) < pos.at(p)){
      req.push_back(neg.at(n));
      n--;
    }
    else{
      req.push_back(pos.at(p));
      p++;
    }
  }
  while(p < pos.size()){
    req.push_back(pos.at(p));
    p++;
  }
  while(n >= 0){
    req.push_back(neg.at(n));
    n--;
  }
  return req;
}