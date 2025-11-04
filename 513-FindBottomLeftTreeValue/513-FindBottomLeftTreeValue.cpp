// Last updated: 11/4/2025, 7:50:10 AM
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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans = 0;
        while(!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            ans = front->val;
            if (front->right != NULL) {
                q.push(front->right);
            }

            if (front->left != NULL) {
                q.push(front->left);
            }

        }
        return ans;
    }
};