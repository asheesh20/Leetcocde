class Solution {
public:
     int maxEnvelopes(vector<vector<int>>& env) {
        if(env.size()==0) return 0;
        sort(env.begin(),env.end(), [](auto &v1, auto &v2){
            return v1[0]<v2[0] || (v1[0]==v2[0] && v1[1]>v2[1]);
        });
        vector<int>dp;
        for(auto i : env)
        {
            auto temp = lower_bound(dp.begin(),dp.end(),i[1]);
            if(temp==dp.end())
                dp.push_back(i[1]);  
            else 
                *temp = i[1];
               
        }
        return dp.size();
    }   
};