// https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums 
class Solution {
public:
		vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
				int rows = rowSum.size(), cols = colSum.size();
				vector<vector<int>> res(rows, vector<int>(cols, 0));
				int i,j;
				long long sum, shift;
				for(i = 0; i < rows; i++) {
						res[i][0] = rowSum[i];
				}
				for(j = 0; j < cols-1; j++) {
						sum = 0;
						for(i = 0; i < rows; i++) {
								sum += res[i][j];
						}
						i = 0;
						while(sum > colSum[j]) {
								shift = min((long long)res[i][j], sum - colSum[j]);
								sum -= shift;
								res[i][j+1] += shift;
								res[i][j] -= shift;
								i++;
						}
				}

				return res;
		}
};

class Solution {
public:
		vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
				int rows = rowSum.size(), cols = colSum.size();
				vector<vector<int>> res(rows, vector<int>(cols, 0));
				int i,j, value;
				for(i = 0; i < rows; i++) {
						for(j = 0; j < cols && rowSum[i] > 0; j++) {
								value = min(rowSum[i], colSum[j]);
								rowSum[i] -= value;
								colSum[j] -= value;
								res[i][j] = value;
						}
				}
				return res;
		}
};
