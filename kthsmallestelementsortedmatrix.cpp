class Solution {
public:
    int count_smaller_elements(int mid,vector<vector<int>>& matrix )
    {
        int count_smaller_Equal=0;
        for(int i=0;i<matrix.size();i++)
        {
            count_smaller_Equal+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        }
        return count_smaller_Equal;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       
        int n=matrix.size();
        
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        
        int ans=0;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            int count_of_elements_smaller_Equal=count_smaller_elements(mid,matrix);
            
            if(count_of_elements_smaller_Equal<k)
            {
                low=mid+1;
            }
            else
            {
                ans=high;
                high=mid-1;
            }
        }
        return low;
        
    }
};