class Solution {
    public:
        int search2DMatrixII(vector<vector<int>> &matrix, int target) {
            if(matrix == null || matrix.size() == 0 || matrix[0].size() == 0)
                return -1;

            const int ROW = matrix.size();
            const int COL = matrix[0].size();

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
