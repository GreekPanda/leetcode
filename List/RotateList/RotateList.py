"""
class ListNode:
    def __init__(self, v):
        self.val = v
        self.head = None
"""

class Solution:
    def rotateList(head, k):
        
        if head is None:
            return
            
        slow = head
        fast = head
        len = 1
        
        for len in xrange(k) and fast is not None:
            fast = fast.next
            
        if len <= k:
            len %= k
            for i in xrange(k):
                fast = fast.next
                
        fast.next = head
        head = slow.next
        slow.next = None
        
        return head
        