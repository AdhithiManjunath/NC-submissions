class Solution {
public:
    void dfs(vector<vector<int>>&adj, int start,vector<int>&vis){
        vis[start]=1;
        for(int it: adj[start]){
            if(vis[it]==0){
                dfs(adj,it,vis);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int count =0;
        for(int i=0; i<n; i++){
            if(vis[i]==0){
                dfs(adj, i, vis);
                count++;
            }
        }

    return count;
    }
};
