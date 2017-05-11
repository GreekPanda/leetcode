class Solution:
    def factorialTrailingZeros(self, n):
        if n == 0:
            return 0
    
        if n < 0:
            return -1
        else:
            return n / 5 + self.factorialTrailingZeros(n / 5)
        