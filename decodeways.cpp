class Solution {
    int helper(string s,int i,int dp[])
    {
        int n=s.size();
        int ways=0;
        if(i<n && s[i]=='0')return 0;
        if(i>=n)return 1;
       if(dp[i]!=-1)return dp[i];
        if(s[i]!='0') ways=helper(s,i+1,dp);
        if(i+1<n && ((s[i]=='1' && s[i+1]<='9')||(s[i]=='2' && s[i+1]<'7')) )
            ways+=helper(s,i+2,dp);
        return dp[i]=ways;
    }
public:
    int numDecodings(string s) {
          int dp[102];
     memset(dp,-1,sizeof(dp));
        
        return helper(s,0,dp);
    }
};