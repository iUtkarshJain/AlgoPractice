#include<vector>
using namespace std;

// O(n) time | O(n) space, where n is the total number of elements in the array
vector<int> spiralTraverse(vector<vector<int>> array) {
    if(array.size() == 0)
        return {};
    
    int startRow = 0, endRow = array.size() - 1, startCol = 0, endCol = array[0].size() - 1;
    vector<int> res;

    while(startRow <= endRow && startCol <= endCol){
        
        for(int col = startCol; col <= endCol; col++)
            res.push_back(array[startRow][col]);
        
        for(int row = startRow + 1; row <= endRow; row++)
            res.push_back(array[row][endCol]);

        if(startRow != endRow)
            for(int col = endCol - 1; col >= startCol; col--)
                res.push_back(array[endRow][col]);
        
        if(startCol != endCol)
            for(int row = endRow - 1; row > startRow; row--)
                res.push_back(array[row][startCol]);
        
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }

    return res;
}
