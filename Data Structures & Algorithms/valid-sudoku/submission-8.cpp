class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<int>> Rows(9);
        vector<unordered_set<int>> Cols(9);
        vector<unordered_set<int>> Squares(9);

        for (int y = 0; y < 9; y++) {
            for (int x = 0; x < 9; x++) {

                if (board[y][x] == '.') continue;

                int Num = board[y][x] - '0';

                auto& CurrentRow = Rows[y];
                auto& CurrentCol = Cols[x];
                auto& CurrentSquare = Squares[ ( x / 3 ) + ( (y / 3) * 3 ) ];
                
                if (CurrentRow.find(Num) != CurrentRow.end() ||
                    CurrentCol.find(Num) != CurrentCol.end() ||
                    CurrentSquare.find(Num) != CurrentSquare.end()
                    ) {
                    
                    return false;
                }

                CurrentRow.insert(Num);
                CurrentCol.insert(Num);
                CurrentSquare.insert(Num);

            }
        }

        return true;
        
    }
};
