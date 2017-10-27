class Solution:
    def nextPermutation(self, num):
        if num is None or len(num) <= 1:
            return None
            
        i = 0
        for i in xrange(len(num) - 1, -1, -1):
            if num[i] < num[i + 1]:
                break
            elif i == 0:
                num = num[::-1]
                return num
                
        j = 0
        for j in xrange(len(num) - 1, i, -1):
            if num[i] < num[j]:
                break
                
        num[i], num[j] = num[j], num[i]
        num[i + 1: len(num)] = num[len(num) - 1:i:-1]
            
        return num
        
                
                
                