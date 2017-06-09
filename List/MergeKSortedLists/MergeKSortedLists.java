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
	public	ListNode merger2Lists(ArrayList<ListNode> lists) {
		if(lists == null)
			return null;
		
		ListNode* dummy = new ListNode(INT_MAX);
		ListNode* lastNode = dummy;
		
		while(true) {
			int count = 0;
			int index = -1, tmp = INT_MAX;
			
			for(int i = 0; i < lists.size(); ++i) {
				if(lists[i] == null) {
					++count;
					if(count == lists.size()) {
						lists.next = null;
						return dummy.next;
					}
					continue;
				}
			}
		}
		for(list[i] != null && lists[i].val < tmp) {
			tmp = lists[i].val;
			index = i;
		}
		
		lastNode.next = lists[index];
		last = last.next;
		lists[index] = lists[index].next;
	}		
}