class Solution:
    def factorialTrailingZeros(self, n):
        if n < 0:
            return -1
        
        count = 0
        while n > 0:
            n /= 5
            count += n
            
        retur count