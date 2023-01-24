public class Solution {
    public TreeNode InvertTree(TreeNode root) {
        if (root == null)
            return null;

        TreeNode temp = root.left;
        root.left = root.right;
        root.right = temp;

        this.InvertTree(root.left);
        this.InvertTree(root.right);

        return root;
    }
}