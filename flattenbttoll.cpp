class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) {
            return;
        }
        
        TreeNode* current = root;
        while(current != NULL) {
            if(current->left) {
                TreeNode* prev = current->left;
                while(prev->right) {
                    prev = prev->right;
                }
                prev->right = current->right;
                current->right = current->left;
                current->left = NULL;
            }
            current = current->right;            
        }
        return;
    }
};