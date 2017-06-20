"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def balancedTree(self, root):
        if root is None:
            return false
            
        return self.maxDepth(root)
        
        
    def maxDepth(self, root):
        if root is None:
            return false;
            
        left = maxDepth(root.left)
        right = maxDepth(root.right)
        if left == -1 or right == -1 or abs(left - right) < 1:
            return false
        
        return true         