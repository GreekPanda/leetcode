"""
class ListNode:
    def __init__(self, val):
        this.val = val
        this.next = none
"""

class Solution:
    def linkedListCycle(self, head):
        if head is none:
            return false
            
        slow = head
        fast = head.next
        
        while fast is not none or fast.next is not none:
            fast = fast.next.next
            slow = slow.next
            
            if fast == slow:
                return true
                
        return false
                
                