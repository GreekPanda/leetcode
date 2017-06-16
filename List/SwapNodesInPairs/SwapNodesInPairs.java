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
	public ListNode rotateList(ListNode head) {
		if(head == null)
			return null;
		
		ListNode dummy = new ListNode(0);
		dummy->next = head;
		ListNode prev = dummy, curr = head;
		
		while(curr != null && curr.next != null) {
			ListNode after = curr.next;
			ListNode tmpNext = after.next;
			after.next = curr;
			curr.next = tmpNext;
			prev.next = after;
			prev = curr;
			curr = tmpNext;
		}
		
		
		return dummy.next;
	}
}