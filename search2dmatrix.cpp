1st Approach :

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(),m=mat[0].size();
        int i=n-1,j=0;
        while(i>=0 && j<m)
        {
            if(mat[i][j]==target)
                return true;
            else if(mat[i][j]>target)
              i--;
            else
                j++;
        }
        return false;
    }
};

2nd Approach (Easy):

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(); //according to question
        int col=matrix[0].size(); // according to question
        int start=0;
        int end=row*col-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int element=matrix[mid/col][mid%col];// row , col 
            if(element==target) return 1;
            else if(element<target) start=mid+1;
            else end=mid-1;
            mid=start+(end-start)/2;
        }
        return 0;
    }
};
