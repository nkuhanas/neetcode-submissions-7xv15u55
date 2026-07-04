#include <vector>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // i believe its 3 unordered sets for each cell.
        // one for the box, one for the column, one for the row
        // just check if theres conflicts, then return bool
        
        // i should be aiming for better than O(n^2)
        // which means i can do multiple loop passes

        // memory is a slight issue, but better than nuking runtime i guess

        // boxes are just the row/column divided by 3 and then flattened

        // wait what how would i even do less than O(n^2). It expects me to solve this in 9 iterations?

        int n = board.size();

        vector<vector<bool>> columns(n, vector<bool>(10, false));
        vector<vector<bool>> rows(n, vector<bool>(10, false));
        vector<vector<bool>> boxes(n, vector<bool>(10, false));


        for (int box = 0; box < n; ++box) {

            for (int column = box%3*3; column < box%3*3+3; ++column) {

                for (int row = box/3*3; row < box/3*3+3; ++row) {

                    std::cout << column << ":" << row << std::endl;

                    char entry = board[column][row];

                    if (entry == '.') {

                        continue;

                    }

                    int num = entry - '0';

                    if (columns[column][num] == true) {

                        return false;
                        
                    } else {

                        columns[column][num] = true;

                    }

                    if (rows[row][num] == true) {

                        return false;
                        
                    } else {

                        rows[row][num] = true;

                    }

                    if (boxes[box][num] == true) {

                        return false;
                        
                    } else {

                        boxes[box][num] = true;

                    }

                }

            }

        }

        return true;

    }
};
