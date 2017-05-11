class Solution:
    def flipBits(self, a, b):
        count = 0
        ret = a ^ b
        neg = false
        
        if ret < 0:
            ret = abs(ret) - 1
            neg = true
            
        if ret > 0:
            count += 1
            ret &= (ret - 1)
            
        if neg:
            count = 32 - count
        return count
        