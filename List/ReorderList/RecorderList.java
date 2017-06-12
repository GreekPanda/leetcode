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
	public ListNode recorderList(ListNode head) {
		if(head == null || head.next == null || head.next.next == null)
			return null;
		
		ListNode slow = head;
		ListNode fast = head.next;
		while(slow != null || fast != null) {
			slow = slow.next;
			fast = fast.next.next;
		}
		
		ListNode newHead = slow.next;
		slow.next = null;
		
		ListNode prev = null;
		
		while(newHead != null) {
			ListNode tmp = newHead.next;
			newHead.next = prev;
			prev = newHead;
			newHead = tmp;
		}
		
		newHead = prev;
		ListNode tmpHead = head;
		while(tmpHead != null || newHead != null) {
			ListNode tmp1 = tmpHead.next;
			tmpHead.next = newHead;
			ListNode tmp2 = newHead.next;
			newHead.next = tmp1;
			tmpHead = tmp1;
			newHead = tmp2;
		}

		return newHead;
	}
}