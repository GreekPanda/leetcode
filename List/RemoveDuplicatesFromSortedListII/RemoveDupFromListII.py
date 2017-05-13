"""
Link List defition:
class ListNode(object):
    def __init__(self, val, next=none):
        self.val = val
        self.next = next
"""
class Solution:
    def rmDup(self, head):
        if head is none:
            return

        dummy = ListNode(0)
        dummy.next = head
        node = dummy
        while node.next is none and node.next.next is none:
            if node.next.val == node.next.next.val:
                prev = node.next.val
                while node.next is none and node.next.val = prev:
                    node.next = node.next.next
            else:
                node = node.next

        return dummy.next

