class Solution:
    def permutationIndex(self, num):
        if num is None or len(num) == 0:
            return None
            
        index = 0
        factor = 0
        for i in xrange(len(num) - 1, -1, -1):
            rank = 0
            for j in xrange(i + 1, len(num)):
                if num[i] > num[j]:
                    rank += 1
                    
            index += rank * factor
            factor *= (len(num) - i)
            
        return index  
                
                