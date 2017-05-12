class Solution(object):
    def printNumber(self, n):
        if n <= 0:
            return;
            
        result = [0]
        help(n, result)
        return result
        
    def helper(self, n, result):
        if n == 0
            return
            
        self.helper(n - 1, result)
        base = pow(10, n - 1)
        len = len(result)
        for i in xrange(10):
            result.append(i * base)
                for j in xrange(len):
                    result.append(result[j] + base * i)