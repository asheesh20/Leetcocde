class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int len1 = s1.length();
        int len2 = s2.length();
        int len3 = s3.length();
        
        if(len1 + len2 != len3){
            return false;
        }
        
        vector<bool> dp(len2 + 1);
        vector<bool> temp;
        int i, j;
        
        dp[0] = true;
        for(i = 1; i <= len2; i++){
            dp[i] = dp[i - 1] && s3[i - 1] == s2[i - 1];
        }
        
        for(i = 1; i <= len1; i++){
            temp = dp;
            temp[0] = dp[0] && s3[i - 1] == s1[i - 1];
            
            for(j = 1; j <= len2; j++){
                temp[j] = (dp[j] && s3[i + j - 1] == s1[i - 1]) || (temp[j - 1] && s3[i + j - 1] == s2[j - 1]); 
            }
            dp = temp;
        }
        return dp[len2];
    }
};