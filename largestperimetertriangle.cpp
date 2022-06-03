class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
      int peri=0; 
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-1; i>=2; i--)
        {
            if(nums[i-2]+nums[i-1]>nums[i])
            {
                peri=nums[i]+nums[i-1]+nums[i-2];
                break;
            }
        }
        return peri;
    }
};