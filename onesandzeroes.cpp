class Solution {
    int solve(vector<string>&strs,int size,int m,int n,int i,vector<vector<vector<int>>>&dp){
        if(i==size) return 0;
        if(dp[i][m][n]!=-1) return dp[i][m][n];
        int exclude=solve(strs,size,m,n,i+1,dp),include=0;
        int ones=0,zeroes=0;
        for(char &c:strs[i]){
            if(c=='1') ones++;
            else zeroes++;
        }
        if(ones<=n && zeroes<=m) include=1+solve(strs,size,m-zeroes,n-ones,i+1,dp); 
        return dp[i][m][n]=max(include,exclude);
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>>dp(strs.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return solve(strs,strs.size(),m,n,0,dp);
    }
};