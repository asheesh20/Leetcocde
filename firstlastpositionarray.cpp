class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int first=-1;
        int m=s+(e-s)/2;
        while(s<=e){
            if(nums[m]==target){
                first=m;
                e=m-1;
            }
            else if(nums[m]<target) s=m+1;
            else e=m-1;
            m=s+(e-s)/2;
        }
        vector<int> v;
        s=0,e=nums.size()-1;
        int second=-1;
        m=s+(e-s)/2;
        while(s<=e){
            if(nums[m]==target){
                second=m;
                s=m+1;
            }
            else if(nums[m]<target) s=m+1;
            else e=m-1;
            m=s+(e-s)/2;
        }
        v.emplace_back(first);
        v.emplace_back(second);
        return v;
    }
};