"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def sortedArrayToBST(self, nums):
        if nums is None:
            return None
            
        return helper(nums, 0, nums.size - 1)
        
    def helper(self, nums, start end):
        if start > end:
            return None
        
        
        root = TreeNode(nums[(start + end) / 2])
        root.left = helper(nums, start, (start + end) /  2 - 1)
        root.right = helper(nums, start + (start + end) / 2 + 1, end)
        return root
        
       
