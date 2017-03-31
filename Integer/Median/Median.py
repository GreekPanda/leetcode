class Median:
    def median(self, nums):
        if not nums:
            return
            
        return self.helper(nums, 0, len(nums) - 1, (len(num) + 1) / 2)
        
        
    def helper(self, nums, left, right, size):
        if(left >= right)
            return nums[right]
            
        m = left
        for i in xrange(left + 1, right + 1):
            if nums[i] < nums[left]:
                m + = 1
                nums[m], nums[i] = nums[i], nums[m] 
                 
            nums[m], nums[left] = nums[left], nums[m]
         
         if m - left + 1 == size:
            return nums[m]
         elif m - left + 1 > size:
            return self.helper(nums, left, m - 1, size)
         elif:
            return self.helper(nums, m + 1, right, size - (m - left + 1))