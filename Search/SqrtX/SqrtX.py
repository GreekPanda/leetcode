class Solution:
    def mySqrt(self, x):
        if x < 0:
            return -1
        
        if x == 0:
            return 0

        start, end = 1, x
        while start + 1 < end:
            mid = (start + end) / 2
            if mid ** 2 == x:
                return mid
            elif mid ** 2 < x:
                start = mid
            else:
                end = mid

        return start

        
