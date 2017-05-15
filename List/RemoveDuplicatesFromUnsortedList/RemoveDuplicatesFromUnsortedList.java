/*
class ListNode {
	int val;
	ListNode next;
	
	ListNode(int val) {
		this.val = val;
		this.next = null;
	}
};
*/

class Solution {
	public ListNode rmDupFromUnsortedList(ListNode head) {
		if(head == null)
			return null;
		
		ListNode curr = head;
		while(!curr) {
			ListNode inner = NULL;
			while(inner.next != NULL  && inner.next.next != NULL) {
				if(inner.next.val == curr.val) {
					inner.next = inner.next.next
				} else
					inner = inner.next;
			}
			curr = curr.next;
		}
		return head;
	}
}