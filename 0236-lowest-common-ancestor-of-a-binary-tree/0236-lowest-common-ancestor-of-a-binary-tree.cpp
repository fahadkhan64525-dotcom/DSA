/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // Base Case
        if (root == NULL || root == p || root == q)
            return root;

        // Search in left and right subtree
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // If both are found, current node is LCA
        if (left != NULL && right != NULL)
            return root;

        // Otherwise return the non-null node
        return (left != NULL) ? left : right;
    }
};