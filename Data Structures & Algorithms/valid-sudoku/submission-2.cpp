class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int size =9;
        unordered_map<int,unordered_set<char>>rows,cols,sq;

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.')continue;

                int sk = ((i/3)*3)+(j/3);

                if(rows[i].count(board[i][j])|| cols[j].count(board[i][j]) || sq[sk].count(board[i][j]))return false;
                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                sq[sk].insert(board[i][j]);
            }
        }
        return true;
    }
};
