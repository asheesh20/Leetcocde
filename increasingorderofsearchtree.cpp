class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        if (!root)
            return nullptr;
        return increasingBST(root, nullptr);
    }

    TreeNode *increasingBST(TreeNode *root, TreeNode *right) {
        auto head = root->left ? increasingBST(root->left, root) : root;
        root->left = nullptr;
        root->right = root->right ? increasingBST(root->right, right) : right;
        return head;

    }
};