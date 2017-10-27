"""
class ListNode:
    def __init__(self, val, head=none):
        self.val = val
        self.next = next
        
"""

class Solution:
    def partitionList(self, head, k):
        if head is None:
            return None
            
        leftDummy = head(0)
        left = leftDummy
        rightDummy = head(0)
        rigth = rightDummy
        
        node = head
        while node is not None:
            if node.val < k:
                left.next = node
                left = left.next
            else:
                right.next = none
                right = right.next
            node = node.next
            
        right.next = none
        left.next = rightDummy.next
         
        return leftDummy.next    
                
            