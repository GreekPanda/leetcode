/*
class ListNode {
	int val;
	ListNode* next;
	
	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}
};
*/
class Solution {
	public:
		ListNode* LinkedListCycleII(ListNode* head) {
			if(head == NULL || head->next == NULL)
				return false;
			
			ListNode* slow = head;
			ListNode* fast = head;
			
			while(fast != NULL || fast->next != NULL) {
				fast = fast->next->next;
				slow = slow->next;
				
				if(slow == fast) {
					fast = head;
					while(slow != fast) {
						fast = fast->next;
						slow = slow->next;
					}
					return slow;
				}
			}
			return NULL;
		}
};