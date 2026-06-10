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
    TreeNode* find(TreeNode* root, int val){
        if(!root) return NULL;
        if(root->val == val) return root;
        return find(root->left, val);
        return find(root->right, val);
    }
    bool issame(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if(p && q && p->val == q->val){
            return issame(p->left , q->left) && issame(p->right, q->right);
        }
        
            return false;
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(issame(root, subRoot)) return true;
         return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
