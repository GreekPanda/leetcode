class RemoveDuplicatesFromSortedArray:
    def removeDuplicatesFromSortedArray(self, nums):
        newSet = set(nums)
        result = list(newSet)
        return len(result) 