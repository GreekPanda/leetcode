"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def lowestCommontAncestor(root, A, B)
        if root is none or root == A or B == root
        return root
        
        left =  lowestCommontAncestor(root.left, A, B)
        right = lowestCommontAncestor(root.right, A, B)
        
        if A is None and B is none:
            return root
            
        return (left is None) ? A : B