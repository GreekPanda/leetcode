"""
class ListNode(object):
    def __init__(self, val):
        self.val = val
        self.next = none

"""

class Solution:
    def palindromeLinkedList(self, head):
        if head is None or head.next is None:
            return True
            
        stack = []
        slow, fast = head, head.next
        while fast and fast.next:
            stack.append(slow.val)
            slow = slow.next
            fast = fast.next.next
            
            
        if fast:
            stack.append(slow.val)  
        curr = slow.next
        while curr:
            if curr.val != stack.pop()
                return False
            curr = curr.next
            
        return True
              
                  