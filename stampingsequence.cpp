class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        int ls = stamp.length();
        int lt = target.length();
        vector<int> ans;
        bool at_least_1 = true;
        int end   = lt-ls;
        
        while (at_least_1)  
        {
            at_least_1 = false;
            for(int i = 0; i<=end; i++)
            {
                bool match = true;
                bool any_change = false;
                for (int j = 0; j<ls; j++)
                {
                    if (target[i+j] == '*') continue;  
                    if(stamp[j] != target[i+j])        
                    {
                        match = false;
                        break;
                    }
                    any_change = true;                 
                }
                if (match && any_change)               
                {
                    ans.push_back(i);                  
                    for (int j=0; j<ls; j++) target[i+j] = '*';
                    at_least_1 = true;                 
                }
            }
        }
        
        for(int i = 0; i<lt; i++)
        {
            if (target[i] != '*') return {};
        }
        
        class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        int ls = stamp.length();
        int lt = target.length();
        vector<int> ans;
        bool at_least_1 = true;
        int end   = lt-ls;
        
        while (at_least_1)  
        {
            at_least_1 = false;
            for(int i = 0; i<=end; i++)
            {
                bool match = true;
                bool any_change = false;
                for (int j = 0; j<ls; j++)
                {
                    if (target[i+j] == '*') continue;  
                    if(stamp[j] != target[i+j])        
                    {
                        match = false;
                        break;
                    }
                    any_change = true;                 
                }
                if (match && any_change)               
                {
                    ans.push_back(i);                  
                    for (int j=0; j<ls; j++) target[i+j] = '*';
                    at_least_1 = true;                 
                }
            }
        }
        
        for(int i = 0; i<lt; i++)
        {
            if (target[i] != '*') return {};
        }
        
  
        int i=0,j=ans.size() -1;
        while(i<j)
            swap(ans[i++],ans[j--]);
        
        return ans;

    }
};
        int i=0,j=ans.size() -1;
        while(i<j)
            swap(ans[i++],ans[j--]);
        
        return ans;

    }
};