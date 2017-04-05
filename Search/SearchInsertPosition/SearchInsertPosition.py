class SearchInsertPosition:
    def searchInsertPosition(self, nums, k):
        if nums is none:
            return -1;
            
        start, end = 0, len(nums) - 1
        while start + 1 < end:
            mid = (start + end) / 2
            if nums[mid] == target:
                end = mid
            elif nums[mid] < target:
                start = mid
            else: 
                end = mid
        
        if nums[start] >= k:
            return start
        elif nums[end] >= k:
            return end
        else:
            return len(nums)   
         