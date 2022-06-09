class Solution {
public:
    bool isvalid(int i, int j, int n, int m, vector<vector<int>>& grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1){
         return true;
        }else{
            return false;
        }
    }
    
    int orangesRotting(vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int time=0;
        int fresh=0;
         for(int i=0; i<n; i++){
             for(int j=0; j<m; j++){
                 if(grid[i][j]==2){
                     q.push({i,j});
                 }else if(grid[i][j]==1){
                     fresh++;
                 }
             }
         }
        if(fresh==0) return time;
         while(!q.empty()){
             int qsize=q.size();
             int temp=0;
             while(qsize--){
                 auto element=q.front();
                 int x1=element.first;
                 int y1=element.second;
                 q.pop();
                 
                 int x[]={-1,0,1,0};
                 int y[]={0,1,0,-1};
                 
                 for(int i=0; i<4; i++){
                     int x2=x1+x[i];
                     int y2=y1+y[i];
                    
                     if(isvalid(x2,y2,n,m,grid)){
                         grid[x2][y2]=2;
                         temp++;
                         q.push({x2,y2});
                     }
                 }
             }
             if(temp!=0){
                 time++;
             }
         }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    time=0;
                    break;
                }
            }
        }
        
      return (time==0)?-1:time;  
        
    }
};