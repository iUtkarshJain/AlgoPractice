#include<iostream>
#include<vector>
using namespace std;

// O(w*h) time | O(w*h) space
vector<vector<int>> transposeMatrix(vector<vector<int>> matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    vector<vector<int>> res(cols, vector<int> (rows, 0));
    for(int i = 0; i < rows; i++)
      for(int j = 0; j < cols; j++)
        res[j][i] = matrix[i][j];
    return res;
  }