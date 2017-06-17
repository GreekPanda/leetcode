/*
class ListNode {
	private int val;
	ListNode next;
	ListNode(int v)	{
		this.val = v;
		this.next = null
	}
}
*/
class Solution {
	public ListNode rotateList(ListNode head, int val) {
		if(head == null)
			return null;
		
		ListNode dummy = new ListNode(0);
		dummy->next = head;
		curr = head;
		
		while(curr != null && curr.next != null) {
			if(curr.val == val)
				curr = curr.next.next;
			else
				curr = curr.next;
		}
		return dummy.next;
	}
}