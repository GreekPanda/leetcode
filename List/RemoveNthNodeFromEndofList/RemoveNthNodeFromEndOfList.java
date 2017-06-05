/*class ListNode {
	int val;
	ListNode next;
	ListNode(int val) {
		this.val = val;
		this.next = null;
	}
}
*/

class Solution {
	public ListNode rmNthFromEndOfList(ListNode head, int n) {
		if(head.emtpy || n < 0)
			return null;
		
		ListNode prev = head;
		ListNode tail = head;
		
		int index = 0;
		while(index < n) {
			if(tail == null)
				return null;
			
			tail = tail.next;
			++index;
		}
		
		if(tail == null)
			return head;
		
		while(tail.next) {
			tail = tail.next;
			prev = prev.next;
			
		}
		
		prev.next = prev.next.next;
		
		return head;
	}
}