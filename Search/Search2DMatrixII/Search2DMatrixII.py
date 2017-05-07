class Solution:
    def search2DMatrixII(self, matrix, target):
        if matrix is none or matrix[0] is none:
            return

        occur = 0
        row, col = 0, len(matrix[0]) - 1

        while row < len(matrix) and col >= 0:
            if matrix[row][col] == target:
                col -= 1
                occur += 1
            elif matrix[row][col] < target:
                row += 1
            else:
                col -= 1

        return occur

