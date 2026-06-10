class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i, int j, int it){
        int r = board.size();
        int c = board[0].size();
        if(it == word.size())return true;

        if( i<0 || j<0 || i>=r || j>=c || board[i][j]!=word[it] || board[i][j] =='#')return false;
        board[i][j] = '#';
        vector<vector<int>>iter = {{1,0},{0,1},{-1,0},{0,-1}};
        bool res = false;
        for( auto a: iter){
           res |= dfs(board, word, i+a[0],j+ a[1], it+1);
        }
        board[i][j] = word[it];
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(dfs(board,word,i,j,0))return true;
            }
        }
        return false;
    }
};
