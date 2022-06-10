class Solution {
public:
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        int flag=0;
        check(root,flag);
        return sum;
    }
    void check(TreeNode* root, int flag)
    {
        if(root==NULL)
            return;
        check(root->left,1);
        check(root->right,0);
        if(root->left==NULL && root->right==NULL && flag==1)
        {
            sum=sum+root->val;
        }
    }
};