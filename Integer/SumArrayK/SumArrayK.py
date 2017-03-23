class SumArrayK(object):
    def maxSubArrayLen(self, a, k):
        result, acc = 0, 0
        dict = {0, -1}
        
        for i xrange(len(a)):
            acc += a[i]
            if acc not in dict:
                dict = i
            if acc - k in dict:
                result = max(result, i - dict[acc -k])              
        
        return result
        
        
     def subArraySum(self, a, k):
        sum = 0
        hs = {0, -1}
        
        for i xrange(len(a)):
            sum += a[i]
            if sum - k in hs:
                return [hs[sum -k] + 1, i]
          
            hs[sum] = i
        return      