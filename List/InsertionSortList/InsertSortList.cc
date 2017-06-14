/*
class ListNode {
	int val;
	ListNode* next;
	
	ListNode(int v):val(v), next(null) {}
};
*/

class Solution {
	public:
		ListNode* insertSortList(ListNode* head) {
			if(head == NULL)
				return NULL;
			
			ListNode *dummy = new ListNode(0);
			ListNode *node = head;
			while(curr != NULL) {
				ListNode prev = dummy;
				while(prev->next != NULL && prev->next->val < curr->val) {
					prev = prev->next;
				}
				ListNode tmp = curr->next;
				curr->next = prev->next;
				prev->next = curr;
				curr = tmp;
				
			}
			return dummy->next;
		}
};