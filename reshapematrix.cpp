class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if ((r * c) != (mat.size() * mat[0].size())) {
            return mat;
        }
        
        int r1 = mat.size();
        int c1 = mat[0].size();
        
        int r2 = 0;
        int c2 = 0;
        
        int i = 0;
        int j = 0;
        vector<vector<int>> result(r, vector<int>(c));
        int total = r * c;
        while(total--) {
            if (j >= c1) {
                j = 0;
                ++i;
            }
            
            if (c2 >= c) {
                c2 = 0;
                ++r2;
            }
            
            result[r2][c2++] = mat[i][j++];
            
        }
        
        return result;
            
    }
};