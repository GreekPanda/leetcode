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
	public	ListNode merger2Lists(ListNode list1, ListNode list2) {
		if(list1 == null && list2 == null)
			return null;
		
		ListNode dummy = new ListNode(0);
		ListNode lastNode = dummy;
		
		while(list1 != null && list2 != null) {
			if(list1.val < list2.val) {
				lastNode.next = list1;
				list1 = list1.next;
			} else {
				lastNode.next = list2;
				list2 = list2.next;
			}
			lastNode = lastNode.next;
		}
		lastNode.next = (null != list1) ? list1 : list2;
		return dummy.next;
	}		
}