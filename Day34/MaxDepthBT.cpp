// leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        if (!root->left && !root->right)
            return 1;

        return (1 + max(maxDepth(root->left), maxDepth(root->right)));
    }
};
