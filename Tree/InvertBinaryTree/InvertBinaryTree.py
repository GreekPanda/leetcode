"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def invertBinaryTree(root):
        if root is None:
            return
            
        root.left, root.right = root.right, root.left
        
        invertBinaryTree(root.left)
        invertBinaryTree(root.right)