class Solution {
public:
  
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        
  
        vector<int> res;
        inorder(res, root);
        
  
        return res;
    }
    
    void inorder(vector<int> &res, TreeNode* root){
        if(root==NULL)
            return;
        
  
        inorder(res, root->left);
        res.push_back(root->val);
        inorder(res, root->right);
    }
};