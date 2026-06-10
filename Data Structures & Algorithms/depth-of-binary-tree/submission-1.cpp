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
    int maxlen =0;
    void findlen(TreeNode* root, int len){
        if(!root->left && !root->right){ maxlen = max(maxlen , len); return;}
        if(root->left) findlen(root->left, len+1);
        if(root->right) findlen(root->right, len+1);
    }

    int maxDepth(TreeNode* root) {
        int len =1;
        if(root)findlen(root, len);
        return maxlen;
    }
};
