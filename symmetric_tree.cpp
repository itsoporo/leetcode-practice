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
    bool two_trees_symmetric(TreeNode* left, TreeNode* right) {
        if (left == nullptr ^ right == nullptr) return false;
        if (left == nullptr && right == nullptr) return true;
        return left->val == right->val
        && two_trees_symmetric(left->left, right->right)
        && two_trees_symmetric(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return two_trees_symmetric(root->left, root->right);
    }
};
