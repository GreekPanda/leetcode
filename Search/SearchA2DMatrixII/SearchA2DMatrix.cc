class Solution {
	public:
		bool searchA2Matrix(vector<vector<int>> &matrix, int target) {
			if(matrix.empty() || matrix[0].empty())
				return false;
			
			int ROW = matrix.size();
			int COL = matrix[0].size();
			
			int start = -1;
			int end = ROW * COL;
			
			while(start + 1 < end) {
				int mid = start +  (end - start) / 2;
				if(matrix[mid / COL][mid % COL] < target) {
					start = mid;
				} else {
					if(matrix[mid / COL][mid % COL] ==  target)
						return true;
					end = mid;
				}
			}
			
			return false;
		}
};