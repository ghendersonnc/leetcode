<?php // NOT NECESSARY, JUST FOR SYNTAX HIGHLIGHTING

class Solution {

    /**
     * @param TreeNode $root
     * @return TreeNode
     */
    function invertTree($root) {
        if ($root === null) {
            return null;
        }

        $temp = $root->left;
        $root->left = $root->right;
        $root->right = $temp;

        $this->invertTree($root->left);
        $this->invertTree($root->right);

        return $root;

    }
}