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
    void dfs(TreeNode* root,vector<int>&ans, set<int>&level, int val){
            if(!root) return;
            if(level.find(val)==level.end()){
                level.insert(val);
                ans.push_back(root->val);
            }
            dfs(root->right,ans,level, val+1);
            dfs(root->left, ans, level, val+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        set<int>level;
        vector<int>ans;
        dfs(root, ans, level, 0);
        return ans;
    }
};
