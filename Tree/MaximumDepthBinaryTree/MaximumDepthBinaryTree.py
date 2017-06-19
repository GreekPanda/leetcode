"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def preOrderTraversal(self, root):
        if root is None:
            return []
            
        return [root.val] + self.preOrderTraversal(root.left) + self.preOrderTraversal(root.right)
        
        
    def preOrderTraversal(self, root, flag):
        if root is None:
            return []
            
        result = []
        s = []
        s.append(root)
        while s:
            root = s.pop()
            result.append(root.val)
            if root.right:
                s.append(root.right)
            if root.left:
                s.append(root.left)
        
        return result         