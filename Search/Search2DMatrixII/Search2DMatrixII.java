class Solution {
    public:
        int search2DMatrixII(int[][] matrix, int target) {
            if(matrix == null || matrix.length() == 0 || matrix[0].length() == 0)
                return -1;

            int ROW = matrix.length();
            int COL = matrix[0].length();

            int row = 0;
            int col = COL - 1;

            while(row < ROW && col >= 0) {
                if(matrix[row][col] == target) {
                    occur++;
                    col--;
                } else if(matrix[row][col] > target) {
                    col--;
                } else
                    row++;
            }
            return occur;
        }
};
