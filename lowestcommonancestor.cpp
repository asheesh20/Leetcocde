class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = root;
        while(true){
        int cur = root->val;
        if(p->val < cur && q->val < cur)    //go left
            root = root->left;
        
        else if(p->val > cur && q->val > cur) //go right
            root = root->right;
        
        else{   
            ans = root;
            break;
        }
      }
        
        return ans;
    }
};