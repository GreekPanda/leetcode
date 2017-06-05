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
		bool LinkedListCycle(ListNode* head) {
			if(head == NULL || head->next == NULL)
				return false;
			
			ListNode* slow = head;
			ListNode* fast = head->next;
			
			while(fast != NULL || fast->next != NULL) {
				fast = fast->next->next;
				slow = slow->next;
				
				if(slow == fast)
					return true;
			}
			return false;
		}
};