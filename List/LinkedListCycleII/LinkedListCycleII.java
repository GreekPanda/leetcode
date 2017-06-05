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
	public ListNode LinkedListCycle(ListNode head) {
		if(head == null || head.next == null)
			return null;
		
		ListNode slow = head;
		ListNode fast = head;
		
		while(fast != null || fast.next != null) {
			fast = fast.next.next;
			slow = slow.next;
			
			if(slow == fast) {
				fast = head;
				while(slow != fast) {
					fast = fast.next;
					slow = slow.next;
				}
				return slow;
			}
		}
		return null;
	}
}