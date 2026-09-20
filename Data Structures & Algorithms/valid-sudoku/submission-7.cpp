#include <bits/stdc++.h>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // some shit with state clearly

        // index with row, column? either way a 2d matrix

        vector<vector<bool>> rows(10, vector<bool>(10, false));
        vector<vector<bool>> columns(10, vector<bool>(10, false));
        vector<vector<bool>> boxes(10, vector<bool>(10, false));

        // vector<int, vector<int, bool>> valid(10, vector<int>(10, false));

        for (int row = 0; row < board.size(); ++row) {

            for (int column = 0; column < board.size(); ++column) {

                char c = board[row][column];

                if (c == '.') {
                    continue;
                }

                int i = c - '0';
                int box = 1 + (column / 3) + (3 * (row / 3));

                if (rows[row][i] || columns[column][i] || boxes[box][i]) {
                    return false;
                }

                rows[row][i] = columns[column][i] = boxes[box][i] = true;

            }
            
        }

        return true;

    }
};
