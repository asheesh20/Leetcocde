class Solution {
public:
  int minSetSize(vector<int>& arr) {
    unordered_map<int,int>mp;
    priority_queue<int>pq;
    int n=arr.size();
    for(auto i:arr){
        mp[i]++;
    }
    for(auto i:mp){
        pq.push(i.second);
    }
   int ans=0;int count=0;
    while(ans<n/2){
        count++;
        ans+=pq.top();
        pq.pop();
    }
    return count;
}
};