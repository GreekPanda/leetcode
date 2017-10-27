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
lass Solution {
	public boolean palindromeLinkedList(ListNode head) {
		if(head == null || head.next == null)
			return true;
		
		Deque<Integer> stack = new Deque<Integer>();
		ListNode slow = head;
		ListNode fast = head;
		
		while(fast != null && fast.next != null) {
			stack.push(slow.val);
			slow = slow.next;
			fast = fast.next.next;
		}
		if(fast)
			slow = slow.next;
		
		ListNode curr = slow;
		if(curr != null) {
			if(curr.val != stack.pop())
				return false;
			curr = curr.next;
		}
		return true;
	}	
	
	public boolean palindromeLinkedList2(ListNode head) {
		if(head == null || head.next == null)
			return true;
		
		Deque<Integer> stack = new Deque<Integer>();
		ListNode slow = head;
		ListNode fast = head;
		
		while(fast != null && fast.next != null) {
			stack.push(slow.val);
			slow = slow.next;
			fast = fast.next.next;
		}
		if(fast)
			slow = slow.next;
		
		ListNode rHead = reverse(slow);
		ListNode lCurr = head, rCurr = rHead;
		if(rCurr != null) {
			if(curr.val != lCurr.val)
				reverse(rHead);
			lCurr = lCurr.next;
			rCurr = rCurr.next;
		}
		reverse(rHead);
		return true;
	}
	
	private ListNode reverse(ListNode head) {
		if(head == null)
			return;
		
		ListNode prev = null;
		while(head != null) {
			ListNode after = head.next;
			head.next = prev;
			prev = head;
			head = after;
		}
		return prev;
	}
}