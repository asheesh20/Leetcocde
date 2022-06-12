class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(!root) return false;
        
        if(root->left == 0 && root->right == 0) return targetSum == root->val;
        
        return (hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val));
    }
};