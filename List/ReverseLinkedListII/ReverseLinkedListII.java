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
	public	ListNode reverseII(ListNode head, int m, int n) {
		if(head == null || m > n)
			return null;
		
		ListNode dummy = new ListNode(0);
		dummy.next = head;
		ListNode node = dummy;
		
		for(int i = 1; i != m; ++i) {
			if(node == null)
				return null;
			else
				node = node.next;
		}
		
		ListNode prevmNode = node;
		ListNode mNode = node.next;
		ListNode nNode = mNode, postnNode = nNode.next;
		
		for(int i = m; i != n; ++i) {
			if(postnNode == null)
				return null;
			
			ListNode temp = postnNode.next;
			postnNode.next = nNode;
			nNode = postnNode;
			postnNode = temp;
		}
		
		prevmNode.next = nNode;
		mNode.next = postnNode;
		return dummy.next;		
	}	
}