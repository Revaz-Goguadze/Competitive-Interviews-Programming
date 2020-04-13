/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public int diameterOfBinaryTree(TreeNode root) {
        if(root == null){
            return 0;
        }
        int leftH = height(root.left);
        int rightH = height(root.right);

        int leftD = diameterOfBinaryTree(root.left);
        int rightD = diameterOfBinaryTree(root.right);

        return Math.max(leftH+rightH, Math.max(leftD,rightD));

    }


    private int height(TreeNode curr){
        if(curr == null){
            return 0;
        }
        return 1+(Math.max(height(curr.left),height(curr.right)));
    }
    
    
}