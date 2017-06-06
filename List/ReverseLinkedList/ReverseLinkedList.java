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
	public ListNode reverse(ListNode head) {
		if(head == null || head.next == null)
			return null;
		
		ListNode prev = null;
		ListNode curr = head;
		
		while(curr != null) {
			ListNode temp = curr.next;
			curr.next = prev;
			prev = curr;
			curr = temp;
		}
		head = prev;
		
		return head;
	}
	
	public ListNode reverse1(ListNode head) {
		if(head == null || head.next == null)
			return null;
		
		ListNode newHead = reverse1(head.next);
		head.next.next = head;
		head.next = null;
		
		return newHead;
	}
}