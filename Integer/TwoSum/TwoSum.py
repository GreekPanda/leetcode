class TwoSum:
    def twoSum(self, nums, target):
        hashDict = {}
        
        for i, item in enumerate(nums):
            if(target - item) in hashDict:
                return (hashDict[target - item] + 1, i + 1)
            hashDict[item] = i 
        
        
        return (-1, -1)