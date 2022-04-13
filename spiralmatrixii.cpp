class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>> result (n, vector<int>(n));
        int m = n;
        int l = 0, k = 0;
        int i, value = 1;

        while(k < m && l < n) {
            for(i = l; i < n; i++) {
                result[k][i] = value++;
            }
            k++;

            for(i = k; i < m; i++) {
                result[i][n - 1] = value++;
            }
            n--;

            for(i = n - 1; i >= l; i--) {
                result[m - 1][i] = value++;
            }
            m--;

            for(i = m - 1; i >= k; i--) {
                result[i][l] = value++;
            }
            l++;
        }

        return result;   
    }
};