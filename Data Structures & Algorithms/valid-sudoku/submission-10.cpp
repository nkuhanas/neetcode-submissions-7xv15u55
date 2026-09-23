#include <bits/stdc++.h>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<vector<int>> rows(9, vector<int>(10, false));
        vector<vector<int>> columns(9, vector<int>(10, false));
        vector<vector<int>> boxes(9, vector<int>(10, false));

        for (int row = 0; row < 9; ++row) {

            for (int column = 0; column < 9; ++column) {

                char entry = board[row][column];

                if (entry == '.') {
                    continue;
                }

                int n = entry - '0';
                int box = ((row/3)*3)+(column/3);

                if (rows[row][n] || columns[column][n] || boxes[box][n]) {
                    return false;
                }

                rows[row][n] = columns[column][n] = boxes[box][n] = true;

            }

        }

        return true;

    }
};
