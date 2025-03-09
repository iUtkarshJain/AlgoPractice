#include<iostream>
#include<vector>
using namespace std;

// O(w * h) time | O(w * h) space
vector<vector<int>> transposeMatrix(vector<vector<int>> matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    vector<vector<int>> transposedMatrix;
    
    for(int j = 0; j < cols; j++){
      vector<int> newRow;
      for(int i = 0; i < rows; i++)
        newRow.push_back(matrix[i][j]);
      transposedMatrix.push_back(newRow);
    }
    
    return transposedMatrix;
  }