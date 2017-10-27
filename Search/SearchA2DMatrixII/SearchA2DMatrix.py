class Solution:
    def searchA2Matrix(self, matrix, target):
        if not matrix or matrix[0]:
            return
            
        ROW = len(matrix), COL = len(matrix[0])
        start, end = -1, ROW * COL - 1
        while start + 1 < end:
            mid = (start + end) / 2
            if matrix[mid / COL][mid % COL] < target:
                start = mid
            elif:
                if matrix[mid / COL][mid % COL] ==  target:
                    return true
                end = mid
                
         return false
            
        
        
        