"""
Link List defition:
class ListNode(object):
    def __init__(self, val, next=none):
        self.val = val
        self.next = next
"""
class Solution:
    def rmDup(self, head):
        curr = head
        while curr:
            while curr.next and curr.next.val == curr.val:
                curr.next = curr.next.next
            curr = curr.next

        return head

