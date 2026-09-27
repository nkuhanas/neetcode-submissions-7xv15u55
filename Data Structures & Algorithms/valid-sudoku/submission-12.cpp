#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<vector<bool>> rows(9, vector<bool>(10, false));
        vector<vector<bool>> columns(9, vector<bool>(10, false));
        vector<vector<bool>> boxes(9, vector<bool>(10, false));

        for (int r = 0; r < 9; ++r) {

            for (int c = 0; c < 9; ++c) {

                char entry = board[r][c];

                if (entry == '.') {
                    continue;
                }

                int n = entry - '0';
                int box = (r/3)*3 + c/3;

                if (boxes[box][n] || columns[c][n] || rows[r][n]) {
                    return false;
                }

                boxes[box][n] = columns[c][n] = rows[r][n] = true;

            }
            
        }

        return true;

    }
};
