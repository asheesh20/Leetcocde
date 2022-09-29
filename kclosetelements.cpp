class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> p;
        vector<int> ans;
        for(int i : arr)
        {
            p.push({abs(i-x),i});
            if(p.size()>k)
                p.pop();
            
        }
        while(p.size()!=0)
        {
            ans.push_back(p.top().second);
            p.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};