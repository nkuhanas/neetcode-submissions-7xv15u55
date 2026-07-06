#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // alright, lets keep a vector for each division of state
        // that means box, column, and row
        // apparently im supposed to calculate box dynamically so lets do that

        // for each of our structures, we'll be 

        const int n = board.size();

        vector<vector<bool>> rows(10, vector<bool>(10, false));
        vector<vector<bool>> columns(10, vector<bool>(10, false));
        vector<vector<bool>> boxes(10, vector<bool>(10, false));

        for (int row = 0; row < n; ++row) {

            for (int column = 0; column < n; ++column) {

                char entry = board[row][column];

                if (entry == '.') {

                    continue;

                }

                int num = entry - '0';
                int box = (row / 3 * 3) + (column / 3);

                if (rows[row][num] || columns[column][num] || boxes[box][num]) {

                    return false;

                }

                rows[row][num] = columns[column][num] = boxes[box][num] = true;

            }

        }

        return true;

    }
};
