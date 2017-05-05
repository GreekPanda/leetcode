class Solution {
	public boolean searchA2Matrix(int[][] matrix, int target) {
		if(matrix == null || matrix.length == 0 || matrix[0] == null)
			return false;
		
		int ROW = matrix.length;
		int COL = matrix[0].length;
		
		int start = -1;
		int end = ROW * COL;
		
		while(start + 1 < end) {
			int mid = start + (end - start) / 2;
			
			if(matrix[mid / COL][mid % COL] < target) {
				start = mid;
			} else {
				if(matrix[mid / COL][mid % COL] == target) {
					return true;
				}
				end = mid;
			}
		}
		
		
		return false;
	}
}