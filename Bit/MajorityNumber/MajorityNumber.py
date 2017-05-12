class Solution:
    def majorityNumber(self, nums):
        if nums is none:
            return -1
            
        key, count = -1, 0    
        for i in nums:
            if count == 0:
                key = i
                count = 1
                continue
                
            if key == num:
                count += 1
            else:
                count -= 1
                
        return key