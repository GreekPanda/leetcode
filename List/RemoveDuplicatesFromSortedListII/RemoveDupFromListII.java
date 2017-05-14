/*
class ListNode {
    private int val;
    private ListNode next;
    ListNode(int vale) {
        this.val = val;
        this.next = next;
    }
}
*/


class Solution {
    public ListNode rmDup(ListNode head) {
        if(head == null || head.next == null)
			return null;
		
		ListNode dummy;
		dummy.next = head;
		ListNode curr;
        while(curr != NULL) {
			while (!curr.next && !curr.next.next) {
			   if(curr.next.val == curr.next.next.val) {
				   int val = curr.next.val;
				   if(curr.next.val != NULL && val == curr.next.next.val) {
						ListNode *tmp = curr.next;
						curr.next = curr.next.next;
						delete tmp;
				   }
			   } else 
				   curr.next = curr.next.next;

			}
			curr = curr.next;
		}
        return dummy.head;
    }
}

