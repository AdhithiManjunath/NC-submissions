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
    void dfs(TreeNode* root, int maxval, int& count){
        if(!root) return;
        if(root->val>=maxval){
            count++;
            maxval = root->val;
        }
        dfs(root->left, maxval, count);
        dfs(root->right, maxval, count);
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int count =0;
        int maxval = root->val;
        dfs(root, maxval, count);
       return count ;
    } 
};
