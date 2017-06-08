"""
class ListNode(object):
    def __init__(self, val):
        self.val = val
        self.next = none

"""

class Solution:
    def reverse(self, head):
        if head is None:
            return
            
        prev = None    
        curr = head
        while curr is not None:
            temp = head.next
            curr.next = prev
            prev = curr
            curr = temp
            
        head = prev
        
        return head
        
        
     def reverse1(self, head):
        if head is None:
            return head
        
        if head.next is None:
            return head
            
        newHead = reverse1(head.next)
        head.next.next = head
        head.next = None
        
        return newHead   
         
            
        
            
            