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
			ListNode *prev = dummy, *curr = head;
			
			while(curr != NULL && curr->next != NULL) {
				ListNode *after = curr->next;
				ListNode *tmpNext = after->next;
				after->next = curr;
				curr->next = tmpNext;
				prev->next = after;
				prev = curr;
				curr = tmpNext;
			}			
			
			return dummy->next;
		}
};