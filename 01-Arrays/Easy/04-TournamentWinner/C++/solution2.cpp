#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// Not the best code 
// O(n) time | O(k) space where n is the number of competitions and k is the number of teams

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
  unordered_map<string,int> m;
  for(int i=0;i < competitions.size();i++){
    if(results[i]){
      if(m.find(competitions[i][0]) == m.end())
        m[competitions[i][0]] = 1;
      else
        m[competitions[i][0]] = m[competitions[i][0]] + 1;
    }
    else{
      if(m.find(competitions[i][1]) == m.end())
        m[competitions[i][1]] = 1;
      else
        m[competitions[i][1]] = m[competitions[i][1]] + 1;
    }
  }
  string winner = "";
  int score = 0;
  for(auto itr = m.begin();itr != m.end();itr++){
    if((itr->second) > score){
      winner = itr->first;
      score = itr->second;
    }
  }
  return winner;
}