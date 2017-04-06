class SearchForRange:
    def searchRange(self, nums, target):
        if not nums:
            return
            
        ret = [-1, -1]
        start, end = 0, len(nums) - 1
        while start + 1 < end:
            mid = (start + end) / 2
            if target == mid:
                end = mid
            elif nums[mid] < target:
                start = mid
            else:
                end = mid
                
         if nums[start] == target:
            ret[0] = start
         elif nums[end] == target:
            ret[0] = end
            
            
         start, end = 0, len(nums) - 1
        while start + 1 < end:
            mid = (start + end) / 2
            if target == mid:
                end = mid
            elif nums[mid] < target:
                start = mid
            else:
                end = mid
                
         if nums[start] == target:
            ret[1] = start
         elif nums[end] == target:
            ret[1] = end 
            
         return ret