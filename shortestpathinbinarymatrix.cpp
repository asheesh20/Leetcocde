class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        if(grid[0][0] == 1) return -1;
        vector<vector<int>> minPaths(grid.size(), vector<int>(grid[0].size(), INT_MAX));
        priority_queue<vector<int>, vector<vector<int>>, compare> pq;
        minPaths[0][0] = 1;
        pq.push({0, 0, 1});
        while(!pq.empty()){
            vector<int> curr = pq.top();
            pq.pop();
            if(curr[0] == grid.size()-1 && curr[1] == grid[0].size() - 1) return curr[2];
            for(int i = curr[0] - 1; i <= curr[0] +1; i++){
                for(int j = curr[1] -1; j <= curr[1] + 1; j++){
                    if(i < 0 || j < 0 || i > grid.size()-1 || j > grid[0].size()-1) continue;
                    if(i == curr[0] && j == curr[1]) continue;
                    if(grid[i][j] == 1) continue;
                    if(minPaths[i][j] > curr[2] + 1){
                        minPaths[i][j] = curr[2] + 1;
                        pq.push({i, j, curr[2] + 1});
                    }
                }
            }
        }
        return -1;
    }
    
private:
    
    struct compare
{
public:
    bool operator() (vector<int>& a, vector<int>& b)
    {
        return a[2] > b[2];
    }
};
};
