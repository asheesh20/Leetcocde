class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        
        vector<int> res;
        postorder(res, root);
        
       
        return res;
    }
    
    void postorder(vector<int> &res, TreeNode* root){
        if(root==NULL)
            return;
        
       
        postorder(res, root->left);
        postorder(res, root->right);
        res.push_back(root->val);
    }
};