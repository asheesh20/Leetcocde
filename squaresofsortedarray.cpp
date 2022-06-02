class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int r=nums.size()-1;
        int l=0;
        while(l<=r)
        {
            if((nums[l]*nums[l])>(nums[r]*nums[r]))
            {
                v.push_back(nums[l]*nums[l]);
                l++;
            }
            else
            {
                v.push_back(nums[r]*nums[r]);
                r--;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};