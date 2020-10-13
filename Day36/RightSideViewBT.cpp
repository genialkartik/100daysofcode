// leetcode.com/problems/binary-tree-right-side-view/

class Solution {
public:
    void recursion(TreeNode* root, int level, vector<int>& res){
        if (root == nullptr)
            return;
        if (res.size() < level)
            res.push_back(root->val);
        recursion(root->right, level + 1, res);
        recursion(root->left, level + 1, res);
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        recursion(root, 1, res);
        return res;
    }
};
