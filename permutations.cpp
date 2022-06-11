class Solution {
public:
    vector<vector<int>> recursion(vector<int> nums){
        int numsSize = nums.size();
        if(numsSize == 1){
            return {nums};
        }
        vector<vector<int>> result;
        for(int i = 0; i < numsSize; i++){
            int prefix = nums[i];
            nums.erase(nums.begin()+i);
            vector<vector<int>> permutations = recursion(nums);
            for(auto permutation: permutations){
                vector<int> fuck = {prefix};
                fuck.insert(fuck.end(), permutation.begin(), permutation.end());
                result.emplace_back(fuck);
            }
            nums.insert(nums.begin()+i, prefix);
        }
        return result;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        return recursion(nums);
    }
};