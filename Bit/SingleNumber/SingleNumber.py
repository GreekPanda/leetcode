class Solution:
    def singleNumber(self, nums):
        if not nums:
            return -1
            
         result = 0
         
         for i in nums:
            result = result ^ i
           
         return result