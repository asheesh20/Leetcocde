1st Approach :

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        int i = m - 1;
        int j = 0;
        
        while (i>=0 && j<n){
            
            if (mat[i][j] == target) return true;
            
            else if (mat[i][j] < target) j++;
            
            else i--;
        }
        return false;
        
    }
};

2nd Approach (Easy) :

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0,j=col-1;
        while(i<row && j>=0){
            int element=matrix[i][j];
            if(element==target) return 1;
            else if(element>target) j--;
            else i++;
        }
        return 0;
    }
};
