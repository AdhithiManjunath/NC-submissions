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
    int dfs(TreeNode* root, bool& isSub){
        if(!root)return 0;
        int left = dfs(root->left, isSub);
        int right = dfs(root->right, isSub);
        int val = (left>right)? left-right: right-left;
        if(val>1) isSub = false;
        return 1+ max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        bool isSub = true;
        dfs(root, isSub);
        return isSub;
    }
};
