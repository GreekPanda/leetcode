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
	public	ListNode SortList(ListNode head) {
		if(lists == null)
			return null;
		
		int len = 0;
		ListNode node = head;
		while(node != null) {
			node = node.next;
			++len;
		}
		return sortListHelper(head, len);
	}		
	private ListNode sortListHelper(ListNode head, int len) {
		if(head == null || len <= 0)
			return null;
		
		ListNode midNode = head;
		int count = 1;
		while(count < (len / 2)) {
			midNode = midNode.next;
			++count;
		}
		
		ListNode left = sortListHelper(midNode.next, len - len / 2);
		midNode = null;
		ListNode right = sortListHelper(head, len / 2);
		
		return mergeList(left, right);
	}
	
	private ListNode mergeList(ListNode left, ListNode right) {
		ListNode dummy = new ListNode(0);
		ListNode listNode = dummy;
		
		while(left != null && right != null) {
			if(left.val < right.val) {
				lastNode.next = left;
				left = left.next;
			} else {
				lastNode.next = right;
				right = right.next;
			}
			lastNode = lastNode.next;
		}
		lastNode = (left != null) ? left : right;
		return dummy.next;
	}
}