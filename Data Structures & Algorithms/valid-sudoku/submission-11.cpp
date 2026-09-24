#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<vector<bool>> rows(9, vector<bool>(10, false));
        vector<vector<bool>> columns(9, vector<bool>(10, false));
        vector<vector<bool>> boxes(9, vector<bool>(10, false));

        for (int r = 0; r < board.size(); ++r) {

            for (int c = 0; c < board.size(); ++c) {

                char entry = board[r][c];

                if (entry == '.') {
                    continue;
                }

                int n = entry - '0';
                int b = (r/3)*3+(c/3);

                if (rows[r][n] || columns[c][n] || boxes[b][n]) {
                    return false;
                }

                rows[r][n] = columns[c][n] = boxes[b][n] = true;

            }

        }

        return true;
        

    }
};
