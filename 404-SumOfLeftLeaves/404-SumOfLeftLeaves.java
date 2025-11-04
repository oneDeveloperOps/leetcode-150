// Last updated: 11/4/2025, 7:50:11 AM
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int sumOfLeftLeaves(TreeNode root) {
        if(root == null) return 0;
        Stack<TreeNode> q = new Stack<>();
        q.push(root);
        int sum = 0;
        while(!q.empty()) {
            TreeNode top = q.pop();
            if (top.left != null) {
                if (top.left.left == null && top.left.right == null) {
                    sum += top.left.val;
                } else {
                    q.push(top.left);
                }
            }
             if(top.right != null) {
                    q.push(top.right);
             }
        }
        return sum;
    }
}