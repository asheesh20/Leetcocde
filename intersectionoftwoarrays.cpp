class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    v.push_back(nums1[i]);
                    nums2[j]=-1;
                }
            }
        }
        sort(v.begin(),v.end());
        vector<int> ans;
      int i=0,c;
        while(i<v.size()){ c=1;
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]) c++;
            }
            ans.push_back(v[i]);
                          i+=c;
        }
        return ans;
    }
};