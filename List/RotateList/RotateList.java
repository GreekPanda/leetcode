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
	public ListNode rotateList(ListNode head, int k) {
		if(head == null)
			return null;
		
		ListNode slow = head;
		ListNode fast = head;
		int len = 1;
		for(; fast.next != null && len <= k; ++len) {
			fast = fast.next;
		}
		
		if(len <= k) {
			k %= len;
			fast = head;
			for(int i = 0; i < k; i++) {
				fast = fast.next;
			}
		}
		
		while(fast != null) {
			fast = fast.next;
			slow = slow.next;
		}
		
		fast.next = head;
		head = slow.next;
		slow.next = null;
				
		return head;
	}
}