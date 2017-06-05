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
	public boolean LinkedListCycle(ListNode head) {
		if(head == null || head->next == null)
			return false;
		
		ListNode slow = head;
		ListNode fast = head.next;
		
		while(fast != null || fast.next != null) {
			fast = fast.next.next;
			slow = slow.next;
			
			if(slow == fast)
				return true;
		}
		return false;
	}
}