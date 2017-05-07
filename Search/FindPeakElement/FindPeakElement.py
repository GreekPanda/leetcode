class Solution:
    def findPeakElement(self, nums):
        if not nums:
            return -1

        start, end = 0, len(nums) - 1

        while start + 1 < end:
            mid = start + (end - start) / 2
            if nums[mid] < nums[mid - 1]:
                end = mid
            elif nums[mid] > nums[mid - 1]:
                start = mid
            else:
                return mid

         mid = start if nums[start] > nums[end] else end
         return mid

        

