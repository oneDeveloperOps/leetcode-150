// Last updated: 11/4/2025, 7:50:18 AM
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
    public int countNodes(TreeNode root) {
        if (root == null) return 0;
        Queue<TreeNode> ans = new LinkedList<>();
        ans.add(root); 
        int count = 0;
        while(!ans.isEmpty()) {
            TreeNode c = ans.poll();
            if(c != null && c.left != null) {
                ans.add(c.left);
            }
            if(c != null && c.right != null) {
                ans.add(c.right);
            }
            count++;
        }
        return count;
    }
}