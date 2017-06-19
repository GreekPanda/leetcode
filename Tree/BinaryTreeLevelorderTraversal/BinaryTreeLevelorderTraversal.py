"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def levelOrderTraversal(self, root):
              
        if root is None:
            return []
            
        result = []
        s = []
        s.append(root)
        while s:
            list = []
            node = s.pop()
            list.append(node.val)
        
            if root.left:
                s.append(root.left)        
            if root.right:
                s.append(root.right)
            
            result.append(list)            
        return result         