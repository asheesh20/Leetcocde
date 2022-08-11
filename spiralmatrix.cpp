class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int c=0;
        int total=row*col;
        int startingRow=0;
        int endingRow=row-1;
        int startingCol=0;
        int endingCol=col-1;
        while(c<total){
            for(int i=startingCol;c<total&&i<=endingCol;i++){
                ans.push_back(matrix[startingRow][i]);
                c++;
            }
                startingRow++;
            for(int i=startingRow;c<total && i<=endingRow;i++){
                ans.push_back(matrix[i][endingCol]);
                c++;
            }
                endingCol--;
            for(int i=endingCol;c<total&&i>=startingCol;i--){
                ans.push_back(matrix[endingRow][i]);
                c++;
            }
                endingRow--;
            for(int i=endingRow;c<total&&i>=startingRow;i--){
                ans.push_back(matrix[i][startingCol]);
                c++;
            }
                startingCol++;
        }
        return ans;
    }
};