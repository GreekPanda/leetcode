"""
class ListNode:
    def __init__(self, v):
        self.val = v
        self.head = None
"""

class Solution:
    def swapNodeInPairs(head):
        
        if head is None:
            return
            
        dummy = ListNode(0)
        dummy.next = head
        prev, curr = dummy, head
        while curr and curr.next:
            prev.next = curr.next
            curr.next = prev.next.next
            prev.next.next = curr
            prev, curr = curr.next, curr.next.next
            
        return dummy.next 