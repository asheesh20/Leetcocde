class Solution {
public:
    int res=0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int j=0;j<grid.size();j++){
            for(int i=0;i<grid[0].size();i++){
                if(grid[j][i]==1){
                    int area=0;
                    res=max( dfs( grid,j,i) , res ) ;
                }
            }
        }
        return res;
    }
    int dfs(vector<vector<int>>& grid,int j,int i){
            grid[j][i]=0;
            int area=1; 
            if(j+1<grid.size() ){
                if(grid[j+1][i]==1)
                    area+=dfs(grid,j+1,i);
            }
            if(j-1>=0){
                if(grid[j-1][i]==1)
                    area+=dfs(grid,j-1,i);
            }        
            if(i+1<grid[0].size()){
                if(grid[j][i+1]==1)
                    area+=dfs(grid,j,i+1);
            }
            if(i-1>=0){
                if(grid[j][i-1]==1)
                    area+=dfs(grid,j,i-1);
            }
            return area;
    }
    
};