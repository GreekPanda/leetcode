class PartitionEvenAndOdd:
	def partitionArrayByEvenAndOdd(self, nums):
	    if nums is none:
	        return 
	        
	    left = 0
	    right = len(nums)
	    
	    while(left < right):    
	        while left < right && nums[left] & 0x01 == 1:
	            lef += 1
	        while left < right && nums[right] & 0x00 == 0:
	            right -= 1
	            
	        if left != right:
	            nums[left], nums[right] = nums[right], nums[left]
	            left += 1
	            right -= 1
	            
	            
	    return nums  