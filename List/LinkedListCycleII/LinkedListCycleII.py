"""
class ListNode:
    def __init__(self, val):
        this.val = val
        this.next = none
"""

class Solution:
    def linkedListCycle(self, head):
        if head is none:
            return
            
        slow = head
        fast = head
        
        while fast is not none or fast.next is not none:
            fast = fast.next.next
            slow = slow.next
            
            if fast == slow:
                fast = head
                while slow != fast:
                    fast = fast.next
                    slow = slow.next
                    
                return slow
                
        return
                
                