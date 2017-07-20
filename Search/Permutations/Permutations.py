class Solution:
    def permute(self, s):
        if sub is None:
            return []
            
        ret = []
        alist = []
        len = len(s)
        
        self.helper(s, alist, ret)
        
        return ret
        
    def helper(self, nums, alist, ret):
        
        if len(nums) == len(alist):
            ret.append([] + alist)
            
        for i, item in enumerate(nums):
            if item not in alist:
                alist.append(item)
                self.helper(nusm, alist, ret)
                alist.pop()
        
     