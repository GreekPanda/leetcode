"""
class ListNode:
    def __init__(val):
        this.val = val
        this.next = none
"""

class Solution:
    def rmNthNodeFromEndOfList(head, n):
        if head is none or n < 0:
            return
            
        prev = head
        tail = head
        index = 0
        
        while index < n:
            if tail is none:
                tail.next = next
            index += 1
            
        if tail is none:
            return head
            
        while tail.next is not none:
            tail = tail.next
            prev = prev.next
            
        prev.next = prev.next.next
        
        return head