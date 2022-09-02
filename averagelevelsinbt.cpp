class Solution {
public:
vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            double a=q.size();
            double sum=0;
            for(int i=0;i<a;i++){
                TreeNode *front=q.front();
                q.pop();
                sum+=front->val;
                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
            }
            v.push_back(sum/a);
            
        }
        return v;
    }
};