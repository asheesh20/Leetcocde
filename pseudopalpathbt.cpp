class Solution {
public:
    int cnt = 0;
    void f(TreeNode* root,int mask){
        if(!root){
            return;
        }
        mask ^= (1<<(root->val));
        if(!root->left && !root->right){
            if(__builtin_popcount(mask) <= 1) cnt++;
            return;
        }
        f(root->left,mask);
        f(root->right,mask);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        f(root,0);
        return cnt;
    }
};