class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i,res=0;
        for(i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }
};