class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,set<char>>r,c,b;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j]=='.')continue;
                if(r[i].count(board[i][j]) ||
                c[j].count(board[i][j]) ||
                b[(i/3)*3 + j/3].count(board[i][j])){
                    return false;
                }
                r[i].insert(board[i][j]);
                c[j].insert(board[i][j]);
                b[(i/3)*3 + j/3].insert(board[i][j]);


            }

        }
        return true;
    }
};
