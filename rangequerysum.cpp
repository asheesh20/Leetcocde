class NumArray {
private:
    vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        vector<int> ps(nums.size()+1,0);
        this->prefixSum = ps;
        prefixSum[0] = 0;
        for(int i = 0;i<nums.size();i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right+1]-prefixSum[left];
    }
};