1st Approach :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hmap;
        
        for(int i=0; i<nums.size(); ++i){
            int curr = nums[i];
            int newTarget = target - curr;
            if(hmap.find(newTarget) != hmap.end()){
                return {hmap[newTarget], i};
            }else{
                hmap.insert(make_pair(curr, i));
            }
            
        }
        return {-1, -1};
    }
};

2nd Approach (Easy) :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target) {
                    return {i,j};
                }
            }
        }
        return {0};
    }
};
