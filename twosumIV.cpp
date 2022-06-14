class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root== NULL)
            return false;
    
        vector<int> nums; 
        inorder(root, nums);
        
        int start = 0, end = nums.size()-1;
        while(start< end){
            int sum = nums[start] + nums[end];
            if(sum == k)   
                return true;
            
            else if(sum< k)
                start++;
            else
                end--;
        }
        
        
        return false;
    }
    
    void inorder(TreeNode* root, vector<int> &nums){
        if(root== NULL)
            return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
};