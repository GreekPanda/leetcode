class Solution:
    def checkPowerOf2(self, n):
        if n < 0:
            return false
        else:
            return (n & (n -1)) == 0
        