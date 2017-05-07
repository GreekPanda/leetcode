class Solution:
    def searchInRotatedSortedArray(self, nums, target):
        if not nums:
            return -1

        start, end = 0, len(nums) - 1
        while start + 1 <end:
            mid = start + (end - start) / 2
            if target == nums[mid]:
                return mid

            if nums[start] < nums[mid]:
                if nums[start] <= target && target < nums[mid]:
                    end = mid
                else:
                    start = mid 
            else:
                if nums[mid] < target && target <= nums[end]:
                    start = mid
                else:
                    end = mid

        if nums[start] == target:
            return start
        if nums[end] == target:
            return end

        return -1
