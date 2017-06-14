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
	public	ListNode insertSortList(ListNode head) {
		if(head == null)
			return null;
		
		ListNode dummy = new ListNode(0);
		ListNode node = head;
		while(curr != null) {
			ListNode prev = dummy;
			while(prev.next != null && prev.next.val < curr.val) {
				prev = prev.next;
			}
			ListNode tmp = curr.next;
			curr.next = prev.next;
			prev.next = curr;
			curr = tmp;
			
		}
		return dummy.next;
	}
}