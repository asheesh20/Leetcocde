class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<pair<int,int>> temp;
        for(auto &it : people)
            temp.push_back({it[1],it[0]});
        sort(temp.begin(),temp.end());
        stack<pair<int,int>> st1;
        stack<pair<int,int>> st2;
        for(auto &it : temp){
            int x = it.first;
            int v = it.second;
            while(x && !st1.empty()){
                if(st1.top().second >= v){
                    x--;
                }
                st2.push(st1.top());
                st1.pop();
            }
            while(!st1.empty() && st1.top().second < v){
                st2.push(st1.top());
                st1.pop();
            }
            st1.push(it);
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
        }
        vector<vector<int>> ans;
        while(!st1.empty()){
            ans.push_back({st1.top().second,st1.top().first});
            st1.pop();
        }
        return ans;
    }
};