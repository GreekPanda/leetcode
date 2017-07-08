"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def insertNodeInABinarySearchTree(self, root, start, end):
        if root is None:
            return None
            
        result = []
        return helper(result, root, start, end)
        
    def helper(self, result, root, start, end):
        if root is None:
            return None
            
        helper(result, root.left, start, end)
        if root.val >= start and root.val <= end:
            result.append(root.val)
        
        helper(result, root.right, start, end)
        
        return result
        
     