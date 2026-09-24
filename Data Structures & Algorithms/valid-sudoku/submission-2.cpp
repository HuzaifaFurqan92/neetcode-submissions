class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool boxes[9][9] = {false};
        for(int r = 0 ;  r < 9 ; r++){
            for(int c =0 ; c < 9 ; c++){
                if(board[r][c] == '.') continue;
                
                //Converting to index 0-8
                int num = board[r][c] - '1';
                int boxIdx = (r/3)*3 + (c/3);
                if(row[r][num] | col[c][num] | boxes[boxIdx][num])
                return false;

                boxes[boxIdx][num] = true;
                row[r][num] = true;
                col[c][num] = true;

            }
        }
        return true;
    }
};
