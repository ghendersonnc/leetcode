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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int rSum;
        while (!q.empty())
        {
            rSum = 0;
            int currentQueueSize = q.size();
            for (int i = 0; i < currentQueueSize; i++)
            {
                TreeNode* currentNode = q.front();
                q.pop();
                rSum += currentNode->val;

                if (currentNode->left)
                    q.push(currentNode->left);
                if (currentNode->right)
                    q.push(currentNode->right);
            }
        }
        return rSum;
    }
};