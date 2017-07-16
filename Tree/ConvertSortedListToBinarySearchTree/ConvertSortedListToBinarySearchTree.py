"""

class ListNode:
    def __init__(self, v):
        self.val = v
        self.next = None

class TreeNode:
    def __init__(self, v):
        this.val = v
        this.left, this.right = None, None 
"""
class Solution:
    def sortedListToBST(self, head):
        if head is None:
            return None
            
        len = 0
        node = head
        while node is not None:
            node.next
            len += 1
            
        return helper(head, len)
        
    def helper(self, head, len):
        if head is None or len <= 0:
            return None
        
        
        ListNode node = head
        count = 0
        while count < len / 2:
            node.next
            count += 1
        
        root = TreeNode(node.val)
        root.left = helper(head, len / 2)
        root.right = helper(node.next, len - 1 - len /2)
        return root
        
       
