class Solution {
private:
	vector<pair<int, int>> dir = {{ -1, 0}, {1, 0}, { 0, -1}, {0, 1}};
public:
	vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
		int n = mat.size();
		int m = mat[0].size();
		queue<pair<int, int>> q; // {i,j}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
			{
				if (mat[i][j] == 0) q.emplace(i, j); // emplace -> dont use {}
				else mat[i][j] = -1;
			}
		}
		while (!q.empty()) {
			auto [row, col] = q.front();
			q.pop();
			for (auto &e : dir) {
				int newRow = row + e.first;
				int newCol = col + e.second;
				if (newCol < 0 || newRow < 0 || newCol >= m || newRow >= n || mat[newRow][newCol] != -1) continue;
				mat[newRow][newCol] = mat[row][col] + 1;
				q.emplace(newRow, newCol);
			}
		}
		return mat;
		return 0; 
		
	}
};
