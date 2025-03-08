#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// O(n) time | O(k) space where n is the number of competitions and k is the number of teams

string tournamentWinner(vector<vector<string>> competitions,
    vector<int> results) {
    unordered_map<string,int> score;
    score[""] = 0;
    string winner = "";
    for(int i = 0;i < competitions.size(); i++){
        string winningTeam = results[i] ? competitions[i][0] : competitions[i][1];
        if(score.find(winningTeam) == score.end())
            score[winningTeam] = 3;
        else
            score[winningTeam] = score[winningTeam] + 3;
        winner = score[winningTeam] > score[winner] ? winningTeam : winner;
    }
    return winner;
}