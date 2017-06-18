"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def inOrderTraversal(self, root):
        if root is None:
            return []
            
        return self.preOrderTraversal(root.left) + [root.val] + self.preOrderTraversal(root.right)
        
        
    def inOrderTraversal(self, root, flag):
        if root is None:
            return []
            
        result = []
        s = []
        
        while root or s:
            if root:
                s.append(root)
                root = root.left
            else:
                root = s.pop()
                result.append(root.left)
                root = root.left
            root = s.pop()
                   
        return result         