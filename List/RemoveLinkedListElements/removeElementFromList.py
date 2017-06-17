"""
class ListNode:
    def __init__(self, v):
        self.val = v
        self.head = None
"""

class Solution:
    def removeElementFromList(head, val):
        
        if head is None:
            return
            
        dummy = ListNode(0)
        dummy.next = head
        curr = dummy
        while curr.next:
            if curr.val == val:                
                curr.next = curr.next.next
            else:
                curr = curr.next
            
        return dummy.next 