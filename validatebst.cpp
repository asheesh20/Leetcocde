class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return check(root, LONG_MIN, LONG_MAX);  
    }
    
    bool check(TreeNode* root, long mn, long mx){
        if(root== NULL) 
            return true;
        
        if(root->val <= mn || root->val >=mx) 
            return false;
        
       
        return (check(root->left, mn, root->val) && check(root->right, root->val, mx));
    }
};