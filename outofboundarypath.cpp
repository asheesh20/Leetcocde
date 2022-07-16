class Solution {
public:
    int N, M, mod = 1e9 + 7;
    int dp[51][51][51];
    vector<pair<int, int>> moves = {{1,0}, {0,1},{-1,0}, {0,-1}};
    int dfs(int i, int j, int steps)
    {
        if(i < 0 || j < 0 || i >= N || j >= M)
        {
            return 1;
        }
        if(dp[i][j][steps] != -1)return dp[i][j][steps];
        if(steps == 0)return dp[i][j][steps] = 0;
        int res = 0;
        for(auto d: moves)
        {
            int x = i + d.first, y = j + d.second;
            res = (res + dfs(x, y, steps - 1))%mod;
        }
        return dp[i][j][steps] = res%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        N = m, M = n;
        memset(dp, -1, sizeof(dp));
        return dfs(startRow, startColumn, maxMove);
    }
};