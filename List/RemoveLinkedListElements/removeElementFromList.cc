/*
class ListNode {
	int val;
	ListNode* next;
	ListNode(int v):val(v), next(null) {}
};
*/
class Solution {
	public:
		ListNode* rotateList(ListNode *head) {
			if(head == NULL)
				return NULL;
			
			ListNode *dummy = new ListNode(0);
			dummy->next = head;
			ListNode *curr = head;
			
			while(curr != NULL && curr->next != NULL) {
				if(curr->val == val)
					curr = curr->next->next;
				else
					curr = curr->next;
			}			
			
			return dummy->next;
		}
};