class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        
        
        while(pq.size() > 1)
        {
            
            int f=pq.top();
            
            pq.pop();
            
            int s=pq.top();
            pq.pop();
            
            
            if(f!=s)
            {
                pq.push(f-s);
            }
        }
        
        return pq.empty()?0:pq.top();
    }
};