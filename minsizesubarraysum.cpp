class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int f=0,sum=0,start=0,mi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                mi=min(mi,(i+1)-(start+1)+1);
                sum-=nums[start++];
                f=1;
            }
        }
        if(f) return mi;
        else return 0;
    }
};