// Last updated: 11/4/2025, 7:50:28 AM
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
    bool preOrder(TreeNode *left, TreeNode *right) {
        if(!left && right) return false;
        if(left && !right) return false;
        if(left == NULL && right == NULL) return true;
        if(left->val != right->val) return false;
        return preOrder(left->left , right->right) && preOrder(left->right , right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return preOrder(root->left , root->right);
    }
};