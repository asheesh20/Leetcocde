class Solution {
public:
   
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
      if(!root1 && !root2)
            return NULL;
        int x=0;
        int y=0;
        if(root1)
            x=root1->val;
        if(root2)
            y=root2->val;
        
       TreeNode* root= new TreeNode(x+y);
            
        if(root1 && root2)  
             root->left=mergeTrees(root1->left,root2->left);
        else if(!root1 && root2)
             root->left=mergeTrees(root1,root2->left);
        else
             root->left=mergeTrees(root1->left,root2);
            
        if(root1 && root2)  
            root->right=mergeTrees(root1->right,root2->right);
        else if(!root1 && root2)
             root->right=mergeTrees(root1,root2->right);
        else
             root->right=mergeTrees(root1->right,root2);
        
        return root;
    }
};