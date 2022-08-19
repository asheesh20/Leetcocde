class Solution {
public:
   bool isPossible(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) 
        {
        return false;
        }  
    int p1 = 0, p2 = 0, p3 = 0;
    int c1 = 0, c2 = 0, c3 = 0;
    int i = 0;
    int prev = 0, curr = 0;
    
    while (i < n) 
    {
        p1 = c1;
        p2 = c2;
        p3 = c3;
        prev = curr;
        curr = arr[i];
        int count = 0;
        while (i < n && arr[i] == curr) 
        {
            i++;
            count++;
        }
        if (prev + 1 == curr) 
        {
            if (count < p1 + p2) 
            {
                return false;
            }
            c1 = max(0, count - (p1 + p2 + p3));
            c2 = p1;
            c3 = p2 + min(p3, count - (p1 + p2));
        } 
        else 
        {
            if (p1 != 0 || p2 != 0) 
            {
                return false;
            }
            c1 = count;
            c2 = 0;
            c3 = 0;
        }
    }
    return (c1 == 0 && c2 == 0);
    }
};