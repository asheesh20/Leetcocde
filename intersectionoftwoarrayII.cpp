class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int table[10001] = {0};
        vector<int> result;
        
        for (int i = 0; i < nums1.size(); i++) {
            ++table[nums1[i]];
        }
        
        for (int j = 0; j < nums2.size(); j++) {
            if (table[nums2[j]] > 0) {
                result.push_back(nums2[j]);
                --table[nums2[j]];
            }
        }
        
        return result;
        
    }
};