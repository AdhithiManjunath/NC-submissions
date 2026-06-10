class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         // kahn's algorithm - topological sort 
        vector<int>indegree(numCourses,0);
        vector<vector<int>>adj(numCourses);
        vector<int>ans;
        for(auto pre: prerequisites){
            int s = pre[0];
            int e = pre[1];
            indegree[e]++;
            adj[s].push_back(e);
        }
        queue<int>q;
        for(int i=0; i<numCourses; i++){
            if(indegree[i]==0){ q.push(i);}
        }
        int finish =0;
        while(!q.empty()){
            int s = q.front();
            q.pop();
            finish++;
            ans.push_back(s);
            for( int it: adj[s]){
                indegree[it]--;
                if(indegree[it]==0){q.push(it);}
            }
        }
        vector<int>a ={};
        reverse(ans.begin(), ans.end());
        return finish == numCourses? ans:a;
    }
};
