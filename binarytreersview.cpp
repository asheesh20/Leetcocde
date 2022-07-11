class Solution {
public:
    
    vector<int> solve(TreeNode* root, vector<int> k, int lvl){
        if (root==NULL){
            return k;
        }
        if (k.size()==lvl){                 
            k.push_back(root->val);
        }
        k = solve(root->right , k , lvl + 1);     
        k = solve(root->left , k , lvl + 1);      
        return k;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> k;
        k = solve( root , k , 0 );
        return k;
    }
};