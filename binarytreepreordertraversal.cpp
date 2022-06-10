class Solution {
public:
   
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        
        vector<int> res;
        preorder(res, root);
   
        return res;
    }
    
    void preorder(vector<int> &res, TreeNode* root){
        if(root==NULL)
            return;
        
   
        res.push_back(root->val);   
        preorder(res, root->left);  
        preorder(res, root->right); 
    }
};