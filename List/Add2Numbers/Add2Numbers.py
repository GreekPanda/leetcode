"""
class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None
"""

class Solution(object):
    def add2Number(self, lst1, lst2):
        if lst1 is None or lst2 is None:
            return None
            
        carry = 0
        dummy = prev = ListNode(-1)
        while lst1 or lst2 or carry:
            v1 = lst1.val if lst1 else 0
            v2 = lst2.val if lst2 eles 0
            ret = (v1 + v2 + carry) % 10
            carry = (v1 + v2 + carry) / 10
            
            prev.next = ListNode(ret)
            prev = prev.next
            
            if lst1:
                lst1 = lst1.next
            
            if lst2:
                lst2 = lst2.next
                
        return dummy.next
            