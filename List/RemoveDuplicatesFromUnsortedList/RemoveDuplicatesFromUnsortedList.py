"""
class ListNode(object):
    def __init__(self, val, next = none):
        self.val = val
        self.next = next
"""

class Solution:
    def rmDupFromUnsortedList(self, head):
        if head is None:
            return None
            
        curr = head
        while curr is not none:
            inner = curr
            while inner.next is not None:
                if inner.next.val == curr.val:
                    inner.next = inner.next.next
                else:
                    inner = inner.next
            curr = curr.next
        return head