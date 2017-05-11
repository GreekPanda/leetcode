class Solution(object):
    def singleNumber(self, nums):
        if not nums:
            return -1
        
        result = 0
                
        for i in xrange(32):
        sum = 0
        for num in nums:
            sum += ((num >> 1) & i)
        
        result |= ((sum % 3) << i)
        
        return self.comp(result, 32)    
        
        
     def comp(self, val, bits):
        return -(val & (1 << (bits - 1))) | (val & ((1 << (bits - 1)) - 1))
                
           
       