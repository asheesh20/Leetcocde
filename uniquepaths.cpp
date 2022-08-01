class Solution {
public:
    int Recursion(int m, int n, int x, int y, vector<vector<int>> & dp){
        if(x >= m || y >= n) return 0;
        if(x == m - 1 || y == n - 1)return 1;
        if(dp[x][y] != -1) return dp[x][y];
        
        return dp[x][y] = Recursion(m,n,x+1,y,dp) + Recursion(m,n,x,y+1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n, -1));
        return Recursion(m,n,0,0,dp);
    }
};