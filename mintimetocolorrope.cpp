class Solution {
public:
    int minCost(string s, vector<int>& v)
    {
        int n = s.size();
        int i=0,j=1;
        int ans = 0;
        int prev = -1; 
        while(j<n)
        {
            if(s[i]!=s[j])
            {
                if(i<=prev)
                {
                    while(i<=prev)
                        i++;
                }
                else
                    i++;
                
                j++;
                continue;
            }
            if(v[i]<v[j])
            {
                ans += v[i];
                j++;
                int k = i;
                if(i<=prev)
                {
                    while(i<=prev)
                        i++;
                }   
                else
                    i++;   
               if(k>prev)
                   prev = k;
                continue;
            }
            
            else
            {
                ans += v[j];
                prev = j;
                j++;
                continue;    
            }
        }
        
        return ans;
    }
};