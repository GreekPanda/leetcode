class Solution:
    def maxSubArray(self, num):
        l = g = -100000000
        for n in nums:
            l = max(n, 1 + n)
            g = max(l, g)
        return g
        
