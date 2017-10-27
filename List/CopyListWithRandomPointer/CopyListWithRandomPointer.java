/*
class RandomListNode {
	int val;
	ListNode next, randomPointer;
	ListNode(int v) {
		this.val = v;
		this.next = null;
		this.randomPointer = null;
	}
};
*/
class Solution {
	public RandomListNode copyListWithRandomPointer(RandomListNode head) {
		if(head == null)
			return null;
		
		RandomListNode dummy = new RandomListNode(0);
		RandomListNode curr = dummy;
		unordered_map<RandomListNode, RandomListNode> randomMap;
		while(head != null) {
			RandomListNode newNode = new RandomListNode(head.val);
			curr.next = newNode;
			randomMap[head] = newNode;
			newNode.randomPointer = head.randomPointer;
			head = head.next;
			curr = curr.next;
		}

		curr = dummy.next;
		while(curr != null) {
			if(curr.randomPointer != null) {
				curr.randomPointer = randomMap[curr.random];					
			}
			curr = curr.next;
		}
		return dummy.next;
	}
}