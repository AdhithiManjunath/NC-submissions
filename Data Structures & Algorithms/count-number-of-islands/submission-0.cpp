class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r, int c, set<pair<int,int>>&vis){
        vis.insert({r,c});
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>moves = {{0,1},{0,-1},{1,0},{-1,0}};
        for(auto it: moves){
            int rn = r+it[0];
            int cn = c+it[1];
            if(rn>=0 && rn<m && cn>=0 && cn<n && grid[rn][cn]=='1' && vis.count({rn,cn})==0){
                dfs(grid,rn,cn,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        set<pair<int,int>>vis;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] =='1' && vis.count({i,j})==0){
                    dfs(grid, i,j,vis);
                    count++;
                }
            }
        }
    return count; 
    }
};
