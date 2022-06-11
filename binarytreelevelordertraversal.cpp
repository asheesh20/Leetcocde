class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        vector<vector<int>>  r;
        queue<pair<TreeNode*, int>> q;
        
        q.push({root, 0});
        
        int index = 0;
        
        pair<TreeNode*, int> p;
        while(!q.empty()) {
            
            p = q.front();
            index = p.second;
            if (index == r.size()) {
                r.push_back({p.first->val});
            } else {
                r[index].push_back(p.first->val);
            }
            q.pop();
            
            if (p.first->left) {
                q.push({p.first->left, index + 1});
            }
                
            if (p.first->right) {
                q.push({p.first->right, index + 1});
            }
            
            
        }
        
        
        return r;
        
    }
};