class Solution {
public:
    vector<int> dir = {0,1,0,-1,0};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int x, int y, int p) {
        int n = image.size(),m = image[0].size();
        queue<pair<int,int>> q;
        q.push({x,y});
        int val = image[x][y];
   
    while(!q.empty())
    {
        int s = q.size();
        for(int i=0;i<s;i++)
        {
            int r = q.front().first,c = q.front().second;
            image[r][c] = p;
            q.pop();
            for(int d=0;d<4;d++)
            {
                int nr = r + dir[d],nc = c + dir[d+1];
                if(nr<n && nc<m && nr>-1 && nc>-1 && image[nr][nc]==val &&image[nr][nc]!=p)
                    q.push({nr,nc});
            }
        }
    }
        
        return image;
    }
};