class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,ans=nums[0];
        for(auto a:nums){
            s+=a;
            ans = max(s,ans);
            if(s<0) s=0;
        }
        return ans;
    }
};