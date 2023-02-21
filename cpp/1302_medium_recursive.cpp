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
    int rSum = 0;
    int depth(TreeNode* root)
    {
        if (root == NULL) return 0;

        return max(depth(root->left), depth(root->right)) + 1;
    }

    void sum(TreeNode* root, int depth, int current)
    {
        if (root != NULL)
        {
            if (current == depth)
            {
               rSum += root->val;
            }
            sum(root->left, depth, current+1);
            sum(root->right, depth, current+1);
        }
    }

    int deepestLeavesSum(TreeNode* root)
    {
        
        int d = depth(root);
        sum(root, d, 1);
        return rSum;
       
    }
};
