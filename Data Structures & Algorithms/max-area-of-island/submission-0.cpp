class Solution {
public:
    void dfs(vector<vector<int>>& grid,int r, int c, set<pair<int,int>>&vis,int& area){
        area++;
        vis.insert({r,c});
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>moves = {{0,1},{0,-1},{1,0},{-1,0}};
        for(auto it: moves){
            int rn = r+it[0];
            int cn = c+it[1];
            if(rn>=0 && rn<m && cn>=0 && cn<n && grid[rn][cn]==1 && vis.count({rn,cn})==0){
                dfs(grid,rn,cn,vis,area);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int count =0;
        set<pair<int,int>>vis;
        int m = grid.size();
        int n = grid[0].size();
        int max_area = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] ==1 && vis.count({i,j})==0){
                    int area =0;
                    dfs(grid, i,j,vis,area);
                    max_area = max(max_area, area);
                }
            }
        }
    return max_area; 
    }
};
