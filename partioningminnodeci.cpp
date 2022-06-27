class Solution {
public:
    int minPartitions(string n) {
        int maxn = -1;
        for(int i=0;i<n.size();i++){
            int k = n[i] - '0';
            maxn = max(maxn,k);
        }
        return maxn;
    }
};