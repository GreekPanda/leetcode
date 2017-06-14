"""
class ListNode(object):
    def __init__(self, val):
        self.val = val
        self.next = none

"""

class Solution:
    def insertSortList(self, head):
        if head is None:
            return
            
        dummy = ListNode(0)
        curr = head
        while curr is not None:
            prev = dummy
            while prev.next is nont None and prev.next.val < curr.val:
                prev = prev.next
                
            tmp = curr.next
            curr.next = prev.next
            prev.next = curr
            curr = tmp
            
        return dummy.next
                
        