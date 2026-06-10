/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void dfs(TreeNode* root,map<int,vector<int>>&m, int value){
        if(!root) return;
        m[value].push_back(root->val);
        dfs(root->left,m, value+1);
        dfs(root->right,m,value+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       map<int,vector<int>>m;
       //m[0].push_back(root->val);
       dfs(root,m,0);
       vector<vector<int>>ans;
       for(int i=0; i<m.size(); i++){
            ans.push_back(m[i]);
       }
       return ans;
    }
};
