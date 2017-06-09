"""
class ListNode(object):
    def __init__(self, val):
        self.val = val
        self.next = none

"""

class Solution:
    def reverse(self, list1, list2):
        if list1 is None and list2 is None:
            return
            
        dummy = None    
        lastNode = dummy.next
        while list1 is not None and list2 is not None:
            if list1.val < list2.val:
                lastNode.next = list1
                list1 = list1.next
            else:
                lastNode.next = list2
                list2 = list2.next
            
            lastNode = lastNode.next
            
        lastNode->next = (list is None) ? list1 : list2
        return dummy.next   
            