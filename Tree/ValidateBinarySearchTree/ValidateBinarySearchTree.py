"""
class TreeNode:
    def __init__(self, v):
        this.val = val
        this.left, this.right = None, None 
"""
class Solution:
    def insertNodeInABinarySearchTree(root, node):
        if root is None:
            return node
            
        if root.val >= node.val:
            insertNodeInABinarySearchTree(root.left, node)
        else:
            insertNodeInABinarySearchTree(root.right, node)
        
        return root
        
    def insertNodeInABinarySearchTree(root, node, flag):
        if root is None:
            return node
            
        tmp = root
        
        while tmp is not None:
            if tmp.val >= node.val:
                if tmp.left is None:
                    tmp.left = node
                    return root
                tmp = tmp.left
                
            else:
                if tmp.right is None:
                    tmp.right = node
                    return root
                tmp = tmp.right
                
        return root    
            
        if root.val >= node.val:
            insertNodeInABinarySearchTree(root.left, node)
        else:
            insertNodeInABinarySearchTree(root.right, node)
        
        return root
        
     