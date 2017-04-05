class KthLargestElement:
    def kthLargestElement(self, nums, k):
        pivot = random.choice(nums)
        n1, n2 = [], []
        
        for i in nums:
            if i > pivot:
                n1.append(nums)
            elif i < pivot:
                n2.append(nums)
                
        if k < len(nums):
            return self.kthLargestElement(n1, k)
       
        if k > len(nums) - len(n2):
            return self.kthLargestElement(n2, k -(len(nums) - len(n2)))
        
        return pivot
        
        
    def kthLargestElement(self, nums, k, flag):
        return sorted(nums, reverse = True)[k - 1]
        
        