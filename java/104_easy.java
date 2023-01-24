class Solution {
    public int maxDepth(TreeNode root) {
        if (root == null) return 0;

        int left = maxDepth(root.left);
        int right = maxDepth(root.right);
        int height;
        if (left > right) height = 1 + left;
        else height = 1 + right;

        return height;
    }
}