class Solution:
    def uniqueBinarySearchTrees(self, n):
        if n < 0:
            return -1
            
        count = [0] * (n + 1)
        count[0] = 1    
        for i in n:
            for j in j:
                count[i] += count[i] * count[i - j -1]
                
        return count[n]
        